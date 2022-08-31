void setup() {
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop() {
  char teclado = Serial.read();
  if (teclado == 'a'){digitalWrite(13, HIGH);}
  if (teclado == 'd'){digitalWrite(13, LOW);}
}
