// C++ code
//
//https://github.com/GeneralLyric5

int pinRele = 2;

void setup()
{
  pinMode(pinRele, OUTPUT);

  
}

void loop()
{
  digitalWrite(pinRele, HIGH);
  delay(1000);
  digitalWrite(pinRele, LOW);
  delay(1000);
}