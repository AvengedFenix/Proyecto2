#include "Melee.h"

Melee::Melee(){
  //range = 0;
}

Melee::Melee(string nombre, int damage, int efectividad) : Arma(nombre, damage){
  this -> efectividad = efectividad;
}

int Melee::getEfectividad(){
  return efectividad;
}

Melee::~Melee(){

}
