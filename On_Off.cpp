String st1;
int LIGA=1;
void setup() {
pinMode(D0,OUTPUT);
Serial.begin(9600);
Serial.println();
Serial.println("Leitura de um String pela Serial e print.");
delay(2000);
}

void loop() {
while(Serial.available())

{ 
  st1=Serial.read
  if(Serial.available==LIGA):
  digitalWrite(D0,0);
  if(Serial.available==)
Serial.println("Foi digitado:" +st1);
}

}
