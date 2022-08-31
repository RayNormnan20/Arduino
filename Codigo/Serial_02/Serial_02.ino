int led01=13, led02=12;
void setup() {
  Serial.begin(9600);
  pinMode(led02, OUTPUT);
  pinMode(led02, OUTPUT);
  pinMode(led01, OUTPUT);
  pinMode(led01, OUTPUT);
}
void loop() {
 char teclado = Serial.read();
 if(teclado=='a'){digitalWrite(led01, HIGH);}
 if(teclado=='s'){digitalWrite(led01, LOW);}
 if(teclado=='a'){digitalWrite(led02, HIGH);}
 if(teclado=='s'){digitalWrite(led02, LOW);}
}


