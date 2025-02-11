/*
  René Rodríguez Martínez 

  Ejemplo con dos leds encenderlos y apagarlos de forma alterna atraves de un boton
*/

//declaramos los dos pines donde estan los leds concetados y el boton
const int LED1 = 3, LED2 = 4, BTN= 2;
//declaramos variables de tipo bolleano para guardar el estado de los leds
boolean led1Operativo=true ,  led2Operativo=false;

void setup() {

  //configuramos los pines en modo salida ya que le daremos ordenes de encendido (no recibimos nada)
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  //configuramos el pin donde esta el boton en entrada ya que queremos recibir la informacion de entrada (recibimos la pulsación)
  pinMode(BTN,INPUT);
  //encendemos el led 1
  digitalWrite(LED1,led1Operativo);
}

void loop() {
  //Comprobamos si han pulsado el boton
  if(digitalRead(BTN)==HIGH){
    //cambia el estado de los booleanos para que esten al contrario (si el 1 esta encendido y el 2 apagodo se invierten)
    led1Operativo=!led1Operativo;
    led2Operativo=!led2Operativo;
    //ahora usando los booleanos encendos / apagamos los leds
    digitalWrite(LED1,led1Operativo);
    digitalWrite(LED2,led2Operativo);
  }
  delay(1000);//esperar un poco para que cuando pulse el usuario no detecte mas  de una pulsación seguida en una pulsación regular
}
