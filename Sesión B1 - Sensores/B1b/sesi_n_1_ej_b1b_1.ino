// C++ code
//https://github.com/GeneralLyric5

int pin9Led = 9;
int brilloLed = 0;
void setup()
{
  pinMode(pin9Led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  brilloLed = map(analogRead(A0),619,1021,0,254);
   //Serial.println(brilloLed); minimo valor relido de la foto resistencia 619 y mayor 1021 
  analogWrite(pin9Led,brilloLed);
}