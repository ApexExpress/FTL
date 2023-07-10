use std::env;
use std::process::Command;

fn starship_get_time() -> String {
    let output = Command::new("/usr/local/bin/starship")
        .arg("time")
        .output()
        .expect("Failed to execute starship time command");

    String::from_utf8_lossy(&output.stdout).trim().to_string()
}

fn prompt_starship_precmd() {
    let status = match env::var("STARSHIP_CMD_STATUS") {
        Ok(val) => val,
        Err(_) => String::new(),
    };

    let pipe_status = match env::var("STARSHIP_PIPE_STATUS") {
        Ok(val) => val,
        Err(_) => String::new(),
    };

    let start_time = match env::var("STARSHIP_START_TIME") {
        Ok(val) => {
            let captured_time: u128 = val.parse().unwrap_or(0);
            captured_time
        }
        Err(_) => 0,
    };

    let current_time = starship_get_time();
    let current_time: u128 = current_time.parse().unwrap_or(0);

    let duration = if start_time > 0 {
        let duration = current_time - start_time;
        duration.to_string()
    } else {
        String::new()
    };

    let jobs_count = env::var("STARSHIP_JOBS_COUNT").unwrap_or(String::new());

    env::set_var("STARSHIP_CMD_STATUS", status);
    env::set_var("STARSHIP_PIPE_STATUS", pipe_status);
    env::set_var("STARSHIP_DURATION", duration);
    env::set_var("STARSHIP_JOBS_COUNT", jobs_count);
}

fn prompt_starship_preexec() {
    let current_time = starship_get_time();
    env::set_var("STARSHIP_START_TIME", current_time);
}

fn main() {
    env::set_var("STARSHIP_SHELL", "zsh");
    env::set_var("VIRTUAL_ENV_DISABLE_PROMPT", "1");

    let columns = env::var("COLUMNS").unwrap_or(String::new());
    let keymap = env::var("KEYMAP").unwrap_or(String::new());
    let status = env::var("STARSHIP_CMD_STATUS").unwrap_or(String::new());
    let pipe_status = env::var("STARSHIP_PIPE_STATUS").unwrap_or(String::new());
    let duration = env::var("STARSHIP_DURATION").unwrap_or(String::new());
    let jobs_count = env::var("STARSHIP_JOBS_COUNT").unwrap_or(String::new());

    let prompt = Command::new("/usr/local/bin/starship")
        .arg("prompt")
        .arg("--terminal-width")
        .arg(&columns)
        .arg("--keymap")
        .arg(&keymap)
        .arg("--status")
        .arg(&status)
        .arg("--pipestatus")
        .arg(&pipe_status)
        .arg("--cmd-duration")
        .arg(&duration)
        .arg("--jobs")
        .arg(&jobs_count)
        .output()
        .expect("Failed to execute starship prompt command");

    let stdout = String::from_utf8_lossy(&prompt.stdout).trim().to_string();

    println!("{}", stdout);
}
