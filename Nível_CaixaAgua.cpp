int A=2;
int B=4;
int C=7;
int MOTOR=13;


void setup(){

  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(13, OUTPUT); 

}

void loop(){
  int sensor1 = digitalRead(2);
  int sensor2 = digitalRead(4);
  int sensor3 = digitalRead(7);

  
   if(sensor1==LOW){
   if((sensor2==HIGH)&&(sensor3==HIGH)){
    digitalWrite(13,HIGH);
    Serial.println("bomba ligada");
    Serial.println("Nivel baixo TQ 2");
    delay(2000);
   }
   if((sensor2==LOW)&&(sensor3==LOW)){
   digitalWrite(13,LOW);
    Serial.println("bomba desligada");
    Serial.println("Nivel alto TQ 2");
    delay(2000);
   }
}
else 
{
  digitalWrite(13,LOW);
  Serial.println("Nivel baixo TQ 1");
  delay(2000);
}
}

