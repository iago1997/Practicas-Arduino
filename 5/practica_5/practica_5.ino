// Incluir la librería Servo
#include <Servo.h>
//Crear las variables
Servo servo1;                         // Crear un objeto tipo Servo llamado servo1
int angulo = 0 ;
int pin=12;
int vel=1;

// inicializar variables,modos de pin, comenzar a usar bibliotecas, etc.
void setup() {
  
  pinMode(2, INPUT);
  servo1.attach(pin);
}

//
void loop() {
  if (digitalRead(2) == LOW) {
      angulo += vel;  
  }
   servo1.write(angulo); 
  delay(40); 

//si angulo > 360 o igual a 0
//girar

  if(angulo>=180 || angulo<=0 ){
      vel *= -1; 
    
  }
  
  
  
}
