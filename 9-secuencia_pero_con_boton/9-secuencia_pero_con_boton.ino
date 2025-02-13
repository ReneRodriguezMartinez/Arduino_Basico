/*
  René Rodríguez Martínez 

  Ejemplo con cuatro leds encenderlos y apagarlos en una secuencia [1,2,3,4] -> [4,3,2,1] activando pulsando con un boton
*/

//declaramos los dos pines donde estan los leds y el boton concetados
const int LED1 = 3, LED2 = 4,LED3 = 5,LED4 = 6, BTN= 2;

void setup() {

  //configuramos los pines en modo salida ya que le daremos ordenes de encendido (no recibimos nada)
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  //configuramos el pin en modo entrada ya que queremos saber cuando sera pulsado
  pinMode(BTN,INPUT);
  //hasta que no se pulse el boton no se ejecutara el loop()
  while(digitalRead(BTN)==LOW){}
}

void loop() {
  //for desde el pin 3 hasta el pin 6 encendiendo los leds
  for (int i = 3; i < 7; i++) {
    digitalWrite(i, HIGH);
    //esperamos 500 miliseg para que no parezca que se encienden todos a la vez
    delay(500);
  }
  //for desde el pin 6 hasta el pin 3 apagando los leds
  for (int i = 6; i > 2; i--) {    
    digitalWrite(i, LOW);
    //esperamos 500 miliseg para que no parezca que se encienden todos a la vez
    delay(500);
  }
}
