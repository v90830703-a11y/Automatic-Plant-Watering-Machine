
int sensorPin = A2;
int outputPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin, INPUT);
  pinMode(outputPin, OUTPUT);
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:

  int sensorValue = analogRead(sensorPin);
  sensorValue = map(sensorValue, 0, 4095, 0, 1023);
  Serial.println(sensorValue);
  delay(1000);

  if (sensorValue > 800) {
    digitalWrite(outputPin, HIGH);
    delay(1000);
    digitalWrite(outputPin, LOW);
  }

  delay(1800000);
  //esp_sleep_enable_timer_wakeup(1800000000);
  //esp_deep_sleep_start();
}
