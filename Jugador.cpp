#include "Jugador.h"

Jugador::Jugador(){

}

Jugador::Jugador(string name){
  nombre = name;
}

string Jugador::getNombre(){
  return nombre;
}

Deck* Jugador::getDeck(int index){
  return decks[index];
}

void Jugador::setNombre(string name){
  nombre = name;
}

void Jugador::addDeck(Deck* deck){
  decks.push_back(deck);
}

Jugador::~Jugador(){
  
}
