int ledPin01 = 13,ledPin02= 12,ledPin03 = 11,ledPin04 = 10,ledPin05 = 9,ledPin06 = 8,ledPin07 = 7,ledPin08 = 6,ledPin09 = 5,ledPin10 = 4,ledPin11 = 3,ledPin12 = 2 ;
boolean ledOn01 = false, ledOn02 = false, ledOn03 = false, ledOn04 = false, ledOn05 = false, ledOn06 = false, ledOn07 = false, ledOn08 = false, ledOn09 = false, ledOn10 = false, ledOn11 = false, ledOn12 = false; //Condicional Booleana

void toggleLED01 (int Led){
  ledOn01=!ledOn01; //Diferencial
  digitalWrite(Led, ledOn01);
} 
void toggleLED02 (int Led){
  ledOn02=!ledOn02; //Diferencial
  digitalWrite(Led, ledOn02);
} 
void toggleLED03 (int Led){
  ledOn03=!ledOn03; //Diferencial
  digitalWrite(Led, ledOn03);
} 
void toggleLED04 (int Led){
  ledOn04=!ledOn04; //Diferencial
  digitalWrite(Led, ledOn04);
} 
void toggleLED05 (int Led){
  ledOn05=!ledOn05; //Diferencial
  digitalWrite(Led, ledOn05);
} 
void toggleLED06 (int Led){
  ledOn06=!ledOn06; //Diferencial
  digitalWrite(Led, ledOn06);
} 
void toggleLED07 (int Led){
  ledOn07=!ledOn07; //Diferencial
  digitalWrite(Led, ledOn07);
} 
void toggleLED08 (int Led){
  ledOn08=!ledOn08; //Diferencial
  digitalWrite(Led, ledOn08);
} 
void toggleLED09 (int Led){
  ledOn09=!ledOn09; //Diferencial
  digitalWrite(Led, ledOn09);
} 
void toggleLED10 (int Led){
  ledOn10=!ledOn10; //Diferencial
  digitalWrite(Led, ledOn10);
} 
void toggleLED11 (int Led){
  ledOn11=!ledOn11; //Diferencial
  digitalWrite(Led, ledOn11);
} 
void toggleLED12 (int Led){
  ledOn12=!ledOn12; //Diferencial
  digitalWrite(Led, ledOn12);
} 


void setup() {
Serial.begin(9600); //puerto Serial
pinMode(ledPin01, OUTPUT);
pinMode(ledPin02, OUTPUT);
pinMode(ledPin03, OUTPUT);
pinMode(ledPin04, OUTPUT);
pinMode(ledPin05, OUTPUT);
pinMode(ledPin06, OUTPUT);
pinMode(ledPin07, OUTPUT);
pinMode(ledPin08, OUTPUT);
pinMode(ledPin09, OUTPUT);
pinMode(ledPin10, OUTPUT);
pinMode(ledPin11, OUTPUT);
pinMode(ledPin12, OUTPUT);

}

void loop() {
char teclado = Serial.read(); //lectura digital
if (teclado=='a'){toggleLED01(ledPin01);}//Anidado
if (teclado=='b'){toggleLED02(ledPin02);}
if (teclado=='c'){toggleLED03(ledPin03);}
if (teclado=='d'){toggleLED04(ledPin04);}
if (teclado=='e'){toggleLED05(ledPin05);}
if (teclado=='f'){toggleLED06(ledPin06);}
if (teclado=='g'){toggleLED07(ledPin07);}
if (teclado=='h'){toggleLED08(ledPin08);}
if (teclado=='i'){toggleLED09(ledPin09);}
if (teclado=='j'){toggleLED10(ledPin10);}
if (teclado=='k'){toggleLED11(ledPin11);}
if (teclado=='l'){toggleLED12(ledPin12);}

}