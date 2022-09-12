void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void loop()
{
  //P
  dot(); dash(); dash(); dot();
  delay(1000);

  //R
  dot(); dash(); dot();
  delay(1000);

  //A
  dot(); dash();
  delay(1000);

  //T
  dash();
  delay(1000);

  //H
  dot(); dot(); dot(); dot();
  delay(1000);

  //A
  dot(); dash();
  delay(1000);

  //M
  dash(); dash();
}
