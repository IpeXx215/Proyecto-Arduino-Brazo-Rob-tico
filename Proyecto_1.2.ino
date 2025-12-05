// PROGRAMACIÓN PROVISIONAL
#include <Servo.h>

Servo rot;
Servo brazo;
Servo pala;
Servo pinza;

#define X1 A1
#define X2 A0
#define Y1 A2
#define Y2 A3
#define Max 1021

void setup()
{
  /*
  rot.write(0);
  brazo.write(50);
  pala.write(0);
  pinza.write(45);
  */
  rot.attach(11);
  brazo.attach(10);
  pala.attach(6);
  pinza.attach(5);
  
  rot.write(90);
  brazo.write(45);
  pala.write(70);
  pinza.write(60);
  
  Serial.begin(9600);
}

void loop()
{
  controles();
  int i;
  
  Serial.println(pinza.read());
  //delay(200);
}



void controles(){
  int i, j, k, l;
  
  // Movimiento Rotacional  (Unico con movimiento completo)
  if(analogRead(X1)<=510){
    for(i=rot.read();i<180;i++){
      if(analogRead(X1)>510)
        break;
      rot.write(i);
      delay(20);
    }
  }else if(analogRead(X1)>510){
    for(i=rot.read();i>2;i--){
      if(analogRead(X1)<510)
        break;
      rot.write(i);
      delay(20);
    }
  }

  //Movimiento Brazo (0-93)
  if(analogRead(Y1)<=510){
    for(j=brazo.read();j<93;j++){
      if(analogRead(Y1)>510)
        break;
      brazo.write(j);
      delay(20);
    }
  }else if(analogRead(Y1)>510){
    for(j=brazo.read();j>0;j--){
      if(analogRead(Y1)<510)
        break;
      brazo.write(j);
      delay(20);
    }
  }
    
   //Movimiento Pala (Aproximadamente 0-140 grados de movimiento)
    if(analogRead(Y2)<=510){
    for(k=pala.read();k<140;k++){
      if(analogRead(Y2)>510)
        break;
      pala.write(k);
      delay(20);
    }
  }else if(analogRead(Y2)>510){
    for(k=pala.read();k>0;k--){
      if(analogRead(Y2)<510)
        break;
      pala.write(k);
      delay(20);
    }
  }
      
   //Movimiento Pinza (60-90)
    if(analogRead(X2)<=510){
    for(l=pinza.read();l<90;l++){
      if(analogRead(X2)>510)
        break;
      pinza.write(l);
      delay(20);
    }
  }else if(analogRead(X2)>510){
    for(l=pinza.read();l>60;l--){
      if(analogRead(X2)<510)
        break;
      pinza.write(l);
      delay(20);
    }
  }
  
/*
  Preguntar sik hay alguna función para que se lleven a cabo los tres if a la vez
    PROBLEMA: hasta que no termina de hacer un if no empieza otro movimiento
    Causa: el bucle del if
*/
  
  
  /*Pruebas
  i = rot.read();
  Serial.println(i);
  delay(200);*/
}
