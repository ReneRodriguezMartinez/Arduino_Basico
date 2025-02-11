/*
  René Rodríguez Martínez
  
  Ejemplo encender un LED concetado al pin 3 del arduino
*/
const int LED= 3; //declaramos el numero del pin donde estara conectado el LED

void setup() {
  //configuramos el pin en modo salida ya que le daremos ordenes de encendido (no recibimos nada)
  pinMode(LED, OUTPUT);

}

void loop() {
  //Encendemos el LED en cada vuelta
  digitalWrite(LED,HIGH);
  
}
