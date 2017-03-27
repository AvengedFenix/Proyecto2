#include "g_cartas.h"

g_cartas::g_cartas(){

}

void g_cartas::addCarta(Carta* carta){
  cartas.push_back(carta);
}

Carta* g_cartas::getCarta(int index){//retorna consola en consolas[index]
  return cartas[index];
}

int g_cartas::sizeVector(){
  return cartas.size();
}
