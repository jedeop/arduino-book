int LED_PIN = 2;
int BUTTON_PIN = 8;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  int button_state = digitalRead(BUTTON_PIN);
  
  Serial.println(button_state);

  if (button_state == LOW) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}
