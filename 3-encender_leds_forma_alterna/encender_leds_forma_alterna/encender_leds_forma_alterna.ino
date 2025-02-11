/*
  René Rodríguez Martínez 

  Ejemplo con dos leds encenderlos y apagarlos de forma alterna
*/

//declaramos los dos pines donde estan los leds concetados
const int LED1 = 3, LED2 = 4;

void setup() {

  //configuramos los pines en modo salida ya que le daremos ordenes de encendido (no recibimos nada)
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

}

void loop() {
  //Encendemos el LED 1
  digitalWrite(LED1,HIGH);
  //esperamos 1000 milisegundos 
  delay(1000);
  //Apagamos el LED 1
  digitalWrite(LED1,LOW);
  //esperamos 1000 milisegundos 
  delay(1000);

  //Encendemos el LED 2
  digitalWrite(LED2,HIGH);
  //esperamos 1000 milisegundos 
  delay(1000);
  //Apagamos el LED 2
  digitalWrite(LED2,LOW);
  //esperamos 1000 milisegundos 
  delay(1000);
  
  //y repetimos por que loop es en si es un bucle
}
