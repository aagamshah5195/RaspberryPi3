#include "sensors.h"

int main(void){ 
  if(wiringPiSetup() == -1)
    return 1;

  pinMode(touch_pin, INPUT);
  pinMode(LEDpin, OUTPUT);
  pinMode(Motor_Pin1, OUTPUT);
  pinMode(Motor_Pin2, OUTPUT);
  pinMode(Motor_Pin3, OUTPUT);
  pinMode(Motor_Pin4, OUTPUT);
  r= (128*grad)/90;
 
  while(1){
    touch_read = digitalRead(touch_pin);
    //delay (250);
    // printf("Touch read value = %d\n",touch_read);
    if (touch_read == 1){
      printf("Touch detected\n");
     // printf("LED ON\n");
      digitalWrite(LEDpin, 1);
     // LEDread = digitalRead(LEDpin);
     // printf(" LED pin value is %d\n", LEDread);
      for(i=0; i<r; i++){
       
        digitalWrite(Motor_Pin1,HIGH);
        digitalWrite(Motor_Pin2,LOW);
        digitalWrite(Motor_Pin3,LOW);
        digitalWrite(Motor_Pin4,LOW);
        delay(10);

        digitalWrite(Motor_Pin1,LOW);
        digitalWrite(Motor_Pin2,HIGH);
        digitalWrite(Motor_Pin3,LOW);
        digitalWrite(Motor_Pin4,LOW);
        delay(10);

        digitalWrite(Motor_Pin1,LOW);
        digitalWrite(Motor_Pin2,LOW);
        digitalWrite(Motor_Pin3,HIGH);
        digitalWrite(Motor_Pin4,LOW);
        delay(10); 

        digitalWrite(Motor_Pin1,LOW);
        digitalWrite(Motor_Pin2,LOW);
        digitalWrite(Motor_Pin3,LOW);
        digitalWrite(Motor_Pin4,HIGH);
        delay(10);
      }

      digitalWrite(Motor_Pin1,LOW);
      digitalWrite(Motor_Pin2,LOW);
      digitalWrite(Motor_Pin3,LOW);
      digitalWrite(Motor_Pin4,LOW);
      delay(1000);

    }
    else{
     printf("Touch not detected\n");
     // printf("LED OFF\n");
      digitalWrite(LEDpin, 0);
     // LEDread = digitalRead(LEDpin);
     // printf("LED is %d\n", LEDread); 
    }
  delay (250);
  }
  return 0;
}
