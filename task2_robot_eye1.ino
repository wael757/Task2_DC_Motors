void setup()
{
  
  pinMode(7, OUTPUT);
  digitalWrite(7, LOW);
}

void loop()
{
  digitalWrite(7, HIGH);
  delay(1500);
  digitalWrite(7, LOW);
  delay(1000);
}