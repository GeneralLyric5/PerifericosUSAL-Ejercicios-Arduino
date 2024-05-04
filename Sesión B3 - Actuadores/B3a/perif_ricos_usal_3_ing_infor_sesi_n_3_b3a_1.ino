#include <Servo.h>
//https://github.com/GeneralLyric5
// C++ code
//

Servo miServo;
int pinSerevo = 4;
int pulsoMinimo = 500;
int pulsoMaximo = 2500;

int menorLumnisoSidad = 671;
int mayorLumninosidad = 227;

int anguloMayorLuminosidad = 170;//ventana abierta
int anguloMenorLuminosidad = 0;//ventana abierta

void setup()
{
  Serial.begin(9600);
  miServo.attach(pinSerevo, pulsoMinimo, pulsoMaximo);
}

void loop()
{
  //671 valor minimo de brillo
  //227 Valor maximo de brillo
  /*
  Serial.println(analogRead(A0));
  delay(500);
  */
  miServo.write(map(analogRead(A0),menorLumnisoSidad,mayorLumninosidad,anguloMenorLuminosidad, anguloMayorLuminosidad));
  
}