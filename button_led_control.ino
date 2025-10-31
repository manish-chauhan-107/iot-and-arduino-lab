void setup()
{
  pinMode (13, OUTPUT);
  pinMode (2 , INPUT);
}

void loop()
{
  int state = digitalRead(2);
  if (state == HIGH)
  digitalWrite(13, HIGH);
  else
  	digitalWrite(13, LOW);
}
