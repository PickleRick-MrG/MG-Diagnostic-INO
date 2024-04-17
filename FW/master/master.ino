void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(2);
  if (val == HIGH){
    digitalWrite(LED_BUILTIN, LOW);
  } else {
    digitalWrite(LED_BUILTIN, HIGH);
  }
}
