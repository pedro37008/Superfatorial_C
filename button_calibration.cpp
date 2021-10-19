const int buttonPin = 2;    
const int ledPin =  13;      

int buttonState = 0;        
void setup() {

  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {

  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
  
    digitalWrite(ledPin, HIGH);
     while (millis() < 5000) {
    sensorValue = analogRead(sensorPin);

    if (sensorValue > sensorMax) {
      sensorMax = sensorValue;
    }


    if (sensorValue < sensorMin) {
      sensorMin = sensorValue;
    }
  } else {
    digitalWrite(ledPin, LOW);
  }
}
