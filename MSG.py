import RPi.GPIO as GPIO
import time

# Pin configuration
coil_A_pin = 18
coil_B_pin = 23
enable_pin = 24

# Coil states
coil_A_energized = False
coil_B_energized = False

def setup():
    GPIO.setmode(GPIO.BCM)
    GPIO.setup(coil_A_pin, GPIO.OUT)
    GPIO.setup(coil_B_pin, GPIO.OUT)
    GPIO.setup(enable_pin, GPIO.OUT)
    GPIO.output(enable_pin, GPIO.LOW)

def energize_coil(coil_pin):
    GPIO.output(coil_pin, GPIO.HIGH)

def deenergize_coil(coil_pin):
    GPIO.output(coil_pin, GPIO.LOW)

def toggle_coil(coil_pin, coil_state):
    if coil_state:
        deenergize_coil(coil_pin)
    else:
        energize_coil(coil_pin)

def generate_sparks(duration, frequency):
    period = 1 / frequency
    num_cycles = int(duration * frequency)

    for _ in range(num_cycles):
        toggle_coil(coil_A_pin, coil_A_energized)
        toggle_coil(coil_B_pin, coil_B_energized)
        coil_A_energized = not coil_A_energized
        coil_B_energized = not coil_B_energized
        time.sleep(period / 2)

def cleanup():
    GPIO.output(coil_A_pin, GPIO.LOW)
    GPIO.output(coil_B_pin, GPIO.LOW)
    GPIO.output(enable_pin, GPIO.LOW)
    GPIO.cleanup()

# Main program
if __name__ == '__main__':
    try:
        setup()
        generate_sparks(duration=5, frequency=10)  # Generate sparks for 5 seconds at 10 Hz
        cleanup()
    except KeyboardInterrupt:
        cleanup()
