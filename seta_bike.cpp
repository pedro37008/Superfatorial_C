
const int buttonPin_direita = 2;
const int buttonPin_esquerda = 3;
const int ledPin_direita =  13;
const int ledPin_esquerda =  9; 
int buttonState = 0;         
int direita;
int esquerda;
int laststatedireita=0;
int laststateesquerda=0;
void setup() {
 pinMode(ledPin_direita, OUTPUT);
 pinMode(ledPin_esquerda, OUTPUT);
 pinMode(buttonPin_direita, INPUT);
 pinMode(buttonPin_esquerda, INPUT);
}

void loop() {
  direita=digitalRead(buttonPin_direita);
  esquerda=digitalRead(buttonPin_esquerda);
if(direita!=laststatedireita)
{
if(direita==HIGH)
{
  digitalWrite(ledPin_direita,HIGH);
  delay(500);
  digitalWrite(ledPin_direita,LOW);
  delay(500);
}
}
if(esquerda!=laststateesquerda)
{
if(esquerda==HIGH)
{
  digitalWrite(ledPin_esquerda,HIGH);
  delay(500);
  digitalWrite(ledPin_esquerda,LOW);
  delay(500);
}
}
}
