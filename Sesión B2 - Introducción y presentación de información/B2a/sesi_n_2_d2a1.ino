//https://github.com/GeneralLyric5
#include <Keypad.h>



const byte numeroDeFilas = 4;
const byte numeroDeColumnas = 4;


//teclado mapeado
char taclas[numeroDeFilas][numeroDeColumnas] = {
    { '1' , '2' , '3' , 'A' },
    { '4' , '5' , '6' , 'B' },
    { '7' , '8' , '9' , 'C' },
    { '*' , '0' , '#' , 'D' }
};

byte pinFilas[numeroDeFilas] = {9, 8, 7, 6};
byte pinColumnas[numeroDeColumnas] = {5, 4, 3, 2};

Keypad miTeclado = Keypad(makeKeymap(taclas),pinFilas,pinColumnas ,numeroDeFilas,numeroDeColumnas);

void setup(){
	Serial.begin(9600);
  	 
}

void loop(){
  char tecla = miTeclado.getKey();
  if(tecla){
  	Serial.println(tecla);
  }
}