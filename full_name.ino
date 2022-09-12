void setup()
{
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void dot()
{
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
}

void dash()
{
  digitalWrite(12, HIGH);
  delay(3000);
  digitalWrite(12, LOW);
  delay(1000);
}

void loop()
{
  String input = Serial.readString();
  input.toUpperCase();
  Serial.println("Enter your name: " + input);
  for (int i = 0; i < input.length(); i++)
  {
    switch (input[i])
    {
      case ' ':
        delay(4000);
        break;
      case 'A':
        dot(); dash();
        break;
      case 'B':
        dash(); dot(); dot(); dot();
        break;
      case 'C':
        dash(); dot(); dash(); dot();
        break;
      case 'D':
        dash(); dot(); dot();
        break;
      case 'E':
        dot();
        break;
      case 'F':
        dot(); dot(); dash(); dot();
        break;
      case 'G':
        dash(); dash(); dot();
        break;
      case 'H':
        dot(); dot(); dot(); dot();
        break;
      case 'I':
        dot(); dot();
        break;
      case 'J':
        dot(); dash(); dash(); dash();
        break;
      case 'K':
        dash(); dot(); dash();
        break;
      case 'L':
        dot(); dash(); dot(); dot();
        break;
      case 'M':
        dash(); dash();
        break;
      case 'N':
        dash(); dot();
        break;
      case 'O':
        dash(); dash(); dash();
        break;
      case 'P':
        dot(); dash(); dash(); dot();
        break;
      case 'Q':
        dash(); dash(); dot(); dash();
        break;
      case 'R':
        dot(); dash(); dot();
        break;
      case 'S':
        dot(); dot(); dot();
        break;
      case 'T':
        dash();
        break;
      case 'U':
        dot(); dot(); dash();
        break;
      case 'V':
        dot(); dot(); dot(); dash();
        break;
      case 'W':
        dot(); dash(); dash();
        break;
      case 'X':
        dash(); dot(); dot(); dash();
        break;
      case 'Y':
        dash(); dot(); dash(); dash();
        break;
      case 'Z':
        dash(); dash(); dot(); dot();
        break;
    }
  }
}
