void setup()
{
  pinMode(12, OUTPUT);
  pinMode (A0 , INPUT); 
  Serial.begin(9600);
}

void loop()
{
  int store = analogRead(A0);
  Serial.println(store);
  if (store < 512)
  digitalWrite(12 , HIGH);
  else
  digitalWrite(12 , LOW);
}
