/*
Project Title : LED Blinking Control Using Button
Platform      : Arduino IDE

Project Description:
This program controls an LED using a button.  
Each time the button is pressed, the LED blinking state changes between ON and OFF.

- When blinking is ON -> LED blinks continuously
- When blinking is OFF -> LED remains OFF

 Hardware Connections:
- LED connected to digital pin 13
- Push button connected to digital pin 2
- Button uses internal pull-up resistor
  (one side of button -> pin 2, other side → GND)

 Core Concepts Used:
1. Digital Input and Output
2. INPUT_PULLUP mode
3. Button state tracking
4. Toggle logic using boolean variable
5. Debouncing using delay()
6. LED blinking using delay()

 Button Logic (INPUT_PULLUP):
- Button NOT pressed -> HIGH
- Button pressed    -> LOW

This means the logic is inverted compared to normal INPUT mode.

 Debounce Delay:
Mechanical buttons generate multiple signals when pressed.
A delay of 200 ms ensures only one press is registered.

*/

// Code for blinking an led using Arduino IDE:

// Pin Constants
const int BUTTON_PIN = 2;    
const int LED_PIN    = 13;    

// Variables          
int buttonState;              
int lastButtonState = HIGH ;   
bool isBlinking = false;     

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Read input pin
  buttonState = digitalRead(BUTTON_PIN);

  // Check if the button is pressed 
  if (buttonState == HIGH && lastButtonState == LOW) {
    isBlinking = !isBlinking; 
    delay(200); // Debounce Delay         
  }

  lastButtonState = buttonState;

  // Blinking Logic 
  if (isBlinking) {
    digitalWrite(LED_PIN, HIGH);
    delay(200);
    digitalWrite(LED_PIN, LOW);
    delay(200);
  } else {
    digitalWrite(LED_PIN, LOW); 
  }
}