/*
  René Rodríguez Martínez 

  Ejemplo encender un led de manera intermitente
*/

const int LED = 3;

void setup() {

  //configuramos el pin en modo salida ya que le daremos ordenes de encendido (no recibimos nada)
  pinMode(LED, OUTPUT);

}

void loop() {
  //Encendemos el LED 
  digitalWrite(LED,HIGH);
  //esperamos 1000 milisegundos 
  delay(1000);
  //Apagamos el LED
  digitalWrite(LED,LOW);
  //esperamos 1000 milisegundos 
  delay(1000);
  //y repetimos por que loop es en si un bucle
}
