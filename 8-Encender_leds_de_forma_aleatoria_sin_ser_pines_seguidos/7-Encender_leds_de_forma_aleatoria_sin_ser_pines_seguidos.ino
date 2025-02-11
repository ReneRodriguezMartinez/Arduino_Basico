/*
  René Rodríguez Martínez 

  Ejemplo con cuatro leds encenderlos y apagarlos de froma aleatoria usando un vector
*/

//declaramos los dos pines donde estan los leds concetados dentro de un vector
const int LEDS[] = {3, 4, 5, 6};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(LEDS[i], OUTPUT);
  }
}

void loop() {
  //un numero aleatorio entre el 0 y el 3 (el correspondiente al pin aleatorio del vector)
  int i = random(0, 4);
  //encendemos y apagamos ese led
  digitalWrite(LEDS[i],HIGH);
  delay(1000);
  digitalWrite(LEDS[i],LOW);
  delay(1000);
}
