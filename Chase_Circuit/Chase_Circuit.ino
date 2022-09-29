const int pinNumber = 6;
int myPin[::pinNumber] = {2, 3, 4, 5, 6, 7};
const int delayTime = 50;

void forward();
void backward();

void setup()
{
  for (int i = 0; i < pinNumber; i++)
  {
    pinMode(myPin[i], OUTPUT);
  }
}

void loop()
{
  forward();
  backward();
}

void forward()
{
  for (int i = 0; i < pinNumber; i++)
  {
    digitalWrite(myPin[i - 1], LOW);
    digitalWrite(myPin[i], HIGH);
    delay(delayTime);
  }
}

void backward()
{
  for (int i = (pinNumber - 1); i >= 0; i--)
  {
    digitalWrite(myPin[i + 1], LOW);
    digitalWrite(myPin[i], HIGH);
    delay(delayTime);
  }
}
