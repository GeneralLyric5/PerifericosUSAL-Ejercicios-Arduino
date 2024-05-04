// C++ code
//https://github.com/GeneralLyric5
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  for(int i = 0; i<9; i++){
  	digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
  }
  for(int i = 9; i>1; i--){
  	digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
  }
}