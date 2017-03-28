#include "Magia.h"

Magia::Magia(){
  damage = tiempo = 0;
}

Magia::Magia(int damage, int tiempo){
  this -> damage = damage;
  this -> tiempo = tiempo;
}

int Magia::getDamage(){
  return damage;
}

int Magia::getTiempo(){
  return tiempo;
}

Magia::~Magia(){

}

void Magia::idk(){

}
