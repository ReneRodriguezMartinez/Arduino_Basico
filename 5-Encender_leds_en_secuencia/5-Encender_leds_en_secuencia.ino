/*
  René Rodríguez Martínez 

  Ejemplo con cuatro leds encenderlos y apagarlos en una secuencia [1,2,3,4] -> [4,3,2,1]
*/

//declaramos los dos pines donde estan los leds concetados
const int LED1 = 3, LED2 = 4,LED3 = 5,LED4 = 6;

void setup() {

  //configuramos los pines en modo salida ya que le daremos ordenes de encendido (no recibimos nada)
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
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
