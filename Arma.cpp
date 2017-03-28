#include "Arma.h"

Arma::Arma(){
  damage = 0;
}

Arma::Arma(string nombre, int damage){
  this -> nombre = nombre;
  this -> damage = damage;
}

string Arma::getNombre(){
  return nombre;
}

int Arma::getDamage(){
  return damage;
}

void Arma::idk(){

}

Arma::~Arma(){

}
