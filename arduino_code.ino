#define en1 10
#define in1 9
#define in2 8
#define button 7

int value = 0;

void setup()
{
  pinMode(en1, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(button, INPUT);
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
}

void loop()
{
  int potValue = analogRead(A0);
  int pwmOutput = map(potValue, 0, 1023, 0, 255);
  analogWrite(en1, pwmOutput);
  
  value = digitalRead(button);
  if( value == HIGH)
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
  }
  else
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  }
}
