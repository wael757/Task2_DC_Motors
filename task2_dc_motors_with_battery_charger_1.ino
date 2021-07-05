// C++ code
//
int IN1 = 5, IN2 = 6, IN3 = 10, IN4 = 9;
int enable12 = 3 , enable34 = 11;
void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(enable12, OUTPUT);
  pinMode(enable34, OUTPUT);
  digitalWrite(enable12, HIGH);
  digitalWrite(enable34, HIGH);
}

void loop()
{
  clockwise();
  delay(5000);
  anticlockwise();
  delay(5000);
  brake();
  delay(5000);
}
// Input state to rotate 2 motors CW
void clockwise()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
// Input state to rotate 2 motors CCW
void anticlockwise()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}
//Motor Brake
void brake()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}