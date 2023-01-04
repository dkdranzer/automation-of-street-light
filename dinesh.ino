int x;
void setup()
{
  Serial.begin(9600);
  pinMode(4, INPUT);
    pinMode(8, OUTPUT);
   
  
}

void loop()
{ x=digitalRead(4);
  Serial.println(x);
  if(x==0)
  {
    digitalWrite(8,HIGH);
  Serial.println("night");
  delay(1000);
  }
 else
   digitalWrite(8,LOW);
     Serial.println("day");
}