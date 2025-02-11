/*
  René Rodríguez Martínez 

  Ejemplo con cuatro leds encenderlos y apagarlos de froma aleatoria
*/

//declaramos los dos pines donde estan los leds concetados
const int LED1 = 3 , LED2 = 4 , LED3 = 5, LED4 = 6;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);  
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() {
  //elige el pin de forma aleatoria de entre el 3 y el 6 
  int num = random(3,7);
  //encendemos y apagamos ese led
  digitalWrite(num,HIGH);
  delay(1000);
  digitalWrite(num,LOW);
  delay(1000);
}
