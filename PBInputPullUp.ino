int pushButton = 2; // Pin for the push button
void setup() {
    // Initialize serial communication at 9600 bits per second
    Serial.begin(9600);
    
    // Make the pushbutton's pin an input with internal pull-up
    pinMode(pushButton, INPUT_PULLUP);
}
void loop() {
    // Read the input pin
    int buttonState = digitalRead(pushButton);
    // Print the state of the button using a ternary operator
    Serial.println(buttonState == LOW ? "Button Pressed" : "Button Not Pressed");
    delay(500); // Delay for readability
}
