// C++ code
//https://github.com/GeneralLyric5
float volt = 0;
float lectura = 0;
float tempC = 0;

void setup()
{
  Serial.begin(9600);
  //pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  volt = (5.0/1024.0) * analogRead(A0);
  tempC = volt * 100.0  - 50.0;
  Serial.println("La temperatura en grados centigrados:");
  Serial.println(tempC);
  delay(100);
}