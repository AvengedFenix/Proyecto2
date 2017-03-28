#include "Arma.h"

Arma::Arma(){
  damage = 0;
}

Arma::Arma(string nombre, double damage){
  this -> nombre = nombre;
  this -> damage = damage;
}

string Arma::getNombre(){
  return nombre;
}

double Arma::getDamage(){
  return damage;
}

void Arma::idk(){

}

Arma::~Arma(){

}
