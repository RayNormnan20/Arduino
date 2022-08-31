#define DHT11_PIN 11
LiquidCrystal_I2C po(32,16,2);
LedControl qw = LedControl(12,9,10,1);

void void setup() {
  //put your setup code here, to run once:
po.init();
po.backligth();
qw.shutdown(0,false);
qw.setIntensity(0,8);
qw.clearDisplay(0%10);
}

void loop() {
  //Put your main code here, to run repeatedly:
ray.reall(DHT11_PIN);
po.setCursor(0,0);
po.print("TEMP : ");
po.print(ray.temperature);
po.print(" C");

ray.reall (DHT11_PIN);
po.setCursor(0,1);
po.print(" K O Y T U I ");
po.print("");
int er = ray.temperature;
qw.setDigit(0,0,(er/10), false);
qw.setDigit(0,1,(er/10), false);
delay(2000);
}