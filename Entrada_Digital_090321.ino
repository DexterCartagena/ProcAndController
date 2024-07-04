int EntradaPin=0;
void setup() 
{
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  
  pinMode(9,INPUT);
  digitalWrite(9,HIGH);
}
void loop() 
{
  EntradaPin=digitalRead(9);
  if(EntradaPin==1)
  {
    digitalWrite(10,HIGH);
    delay(5000);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    delay(1000);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    delay(5000);
    digitalWrite(12,LOW);
  }
  else
  {
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
  }
}
