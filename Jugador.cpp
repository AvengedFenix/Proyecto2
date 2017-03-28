#include "Jugador.h"

Jugador::Jugador(){

}

Jugador::Jugador(string name){
  nombre = name;
}

string Jugador::getNombre(){
  return nombre;
}

Carta* Jugador::getCarta(){
  return carta;
}

void Jugador::setNombre(string name){
  nombre = name;
}

void Jugador::setCarta(Carta* c){
  carta = c;
}

Jugador::~Jugador(){

}
