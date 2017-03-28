#include "Deck.h"

Deck::Deck(){

}

Deck::Deck(string name){
  nombre = name;
}

string Deck::getNombre(){
  return nombre;
}

void Deck::setNombre(string name){
  nombre = name;
}

Carta* Deck::getCarta(int index){
  return cartas[index];
}

void Deck::addCarta(Carta* carta){
  cartas.push_back(carta);
}
