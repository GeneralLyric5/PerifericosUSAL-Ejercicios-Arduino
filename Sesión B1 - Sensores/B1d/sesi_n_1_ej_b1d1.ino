// C++ code
//https://github.com/GeneralLyric5
int TRIGGER = 9;
int ECHO = 8;
float DURACION = 0;
float DISTANCIA = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop()
{
  digitalWrite(TRIGGER, HIGH);
  delay(1);
  digitalWrite(TRIGGER, LOW);
  DURACION = pulseIn(ECHO,HIGH);
  DISTANCIA = DURACION / 58.2;
  Serial.println("El objeto está a:");
  Serial.println(DISTANCIA);
  delay(100);
  
  
}