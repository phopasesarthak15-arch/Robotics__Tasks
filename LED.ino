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