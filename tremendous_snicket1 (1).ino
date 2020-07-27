#incloude <servo.h>

servo moto1;
servo moto2;

int pos = 0;

void setup()   {
  moto1.attach(3);
  moto1.attach(5);
  
}
 
void loop ()   {
  for (pos = 0; pos <=180; pos =+ 1) {
    moto1.write(pos);
    moto2.write(180-pos);
    delay(15);
  }
  for (pos = 180; pos >=0; pos -=1)  {
    moto1.write(pos);
    moto2.write(180-pos);
    delay(15);
  }
}