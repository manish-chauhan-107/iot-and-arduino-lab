void setup()
{
  pinMode(10, OUTPUT);  //led output
  pinMode (3 , INPUT);  //echo input 
  pinMode(5 , OUTPUT);  //trig output
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(5, LOW);
  delayMicroseconds(2);
  digitalWrite(5, HIGH);
  delayMicroseconds(10);
  digitalWrite(5, LOW);

  long duration = pulseIn(3,HIGH);
  long distance = duration * 0.0343/2;
   Serial.print("distance");
  Serial.println(distance);
  Serial.print("Duration: ");
  Serial.println(duration);
  if (distance < 150 )
  {
    digitalWrite(10 , HIGH);
  }
  else 
    digitalWrite(10 , LOW);
    
}
