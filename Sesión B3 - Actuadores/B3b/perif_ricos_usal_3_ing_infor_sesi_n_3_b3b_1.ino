// C++ code
//
//https://github.com/GeneralLyric5
int pinMotor = 9;
int velocidad = 0;
int i;

void setup()
{
  Serial.begin(9600);
  pinMode(pinMotor, OUTPUT);
}

void loop()
{
  /*
  // Apartado  A "Motor Parpadeante"
  analogWrite(pinMotor, 255);
  delay(2000);
  
  analogWrite(pinMotor, 0);
  delay(2000);
  */
  
  /*
  //Apartado B "Acelerar y decelerar"
  for(i = 0; i< 254; i++){
    analogWrite(pinMotor, i);
  	delay(15);
  }
  delay(2000);
  for(i = 255; i>= 0; i--){
    analogWrite(pinMotor, i);
  	delay(15);
  }
  delay(2000);
  */
  
  //Apartado C "Mandar velocidad por puerto serie"
  if(Serial.available()){
    velocidad = Serial.parseInt();
    if(velocidad >= 0 && velocidad <= 255){
    	analogWrite(pinMotor, velocidad);
    }else{
    	Serial.println("Valor incorrecto, introduzca unicamente valores enteros de 0-255");
      	Serial.println(velocidad);
    }
  }
}