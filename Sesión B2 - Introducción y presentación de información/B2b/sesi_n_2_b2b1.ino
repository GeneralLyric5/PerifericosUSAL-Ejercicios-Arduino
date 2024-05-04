//https://github.com/GeneralLyric5
#include <LiquidCrystal.h>
#include <Keypad.h>

const int rs = 9, en = 8, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);




const byte numeroDeFilas = 4;
const byte numeroDeColumnas = 4;


//teclado mapeado
char taclas[numeroDeFilas][numeroDeColumnas] = {
    { '1' , '2' , '3' , 'A' },
    { '4' , '5' , '6' , 'B' },
    { '7' , '8' , '9' , 'C' },
    { '*' , '0' , '#' , 'D' }
};

byte pinFilas[numeroDeFilas] = {7, 6, 5, 4};
byte pinColumnas[numeroDeColumnas] = {3, 2, A1, A0};

Keypad miTeclado = Keypad(makeKeymap(taclas),pinFilas,pinColumnas ,numeroDeFilas,numeroDeColumnas);

void setup(){
	Serial.begin(9600);
  	lcd.begin(16, 2);
  	lcd.print("TEST PANTALLA");
  	delay(1000);
  	lcd.clear();
}

void loop(){
  char tecla = miTeclado.getKey();
  if(tecla){
    lcd.clear();
  	Serial.println(tecla);
    lcd.setCursor(0,0);
    lcd.print("Tecla membrana:");
    lcd.setCursor(0,1);
    lcd.print(tecla);
  }
  if(Serial.available()){
  	lcd.clear();
    String texto = Serial.readStringUntil('\n');
  	Serial.println(tecla);
    lcd.setCursor(0,0);
    lcd.print("Tecla Serie:");
    lcd.setCursor(0,1);
    lcd.print(texto);
    Serial.println(texto);
  }
}