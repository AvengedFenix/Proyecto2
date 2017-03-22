#include "Melee.h"

Melee::Melee(){
  range = 0;
}

Melee::Melee(string nombre, int damage, int range) : Arma(nombre, damage){
  this -> range = range;
}

Melee::getEfectividad(){
  return efectividad;
}

Melee::~Melee(){

}
