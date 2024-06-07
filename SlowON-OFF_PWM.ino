void setup()
{
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  // put your setup code here, to run once:
}
void loop()
{
  // put your main code here, to run repeatedly:
  int i, n;
  int cnmax = 100;
  int cimax = 50;
  digitalWrite(13, LOW);
  for (n = cnmax; n >= 0; n--) // UP
  {
    for (i = 0; i <= cimax; i++)
    {
      digitalWrite(13, HIGH);
      delayMicroseconds(cnmax - n);
      digitalWrite(13, LOW);
      delayMicroseconds(n);
    }
  }
  for (n = 0; n <= cnmax; n++) // DOWN
  {
    for (i = 0; i <= cimax; i++)
    {
      digitalWrite(13, HIGH);
      delayMicroseconds(cnmax - n);
      digitalWrite(13, LOW);
      delayMicroseconds(n);
    }
  }
  delay(10);
}
