#include "Ranged.h"

Ranged::Ranged(){
  range = 0;
}

Ranged::Ranged(string nombre, double damage, int range) : Arma(nombre, damage){
  this -> range = range;
}

int Ranged::getRange(){
  return range;
}

Ranged::~Ranged(){

}
