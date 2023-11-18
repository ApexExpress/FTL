import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class JavaFXExample extends Application {

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) {
        primaryStage.setTitle("JavaFX Example");

        // Create a label
        Label label = new Label("Enter your name:");

        // Create a text field for user input
        TextField textField = new TextField();

        // Create a button and associate it with an event handler
        Button button = new Button("Click me!");
        button.setOnAction(e -> onButtonClick(textField));

        // Create a layout and add components to it
        VBox layout = new VBox(10);
        layout.getChildren().addAll(label, textField, button);

        // Create a scene and set it on the stage
        Scene scene = new Scene(layout, 300, 150);
        primaryStage.setScene(scene);

        // Show the stage
        primaryStage.show();
    }

    private void onButtonClick(TextField textField) {
        // Handle button click event
        String name = textField.getText();
        System.out.println("Hello, " + name);
    }
}
