// C++ code
//https://github.com/GeneralLyric5
int pin13Led = 13;

void setup()
{
  pinMode(pin13Led, OUTPUT);
}

void loop()
{
  digitalWrite(pin13Led, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pin13Led, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}