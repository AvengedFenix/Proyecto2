<<<<<<< HEAD
#include "Melee.h"

Melee::Melee(){
  efectividad = 0;
}

Melee::Melee(string nombre, int damage, int efectividad) : Arma(nombre, damage){
  this -> efectividad = efectividad;
}

int Melee::getEfectividad(){
  return efectividad;
}

Melee::~Melee(){

}
=======
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
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
