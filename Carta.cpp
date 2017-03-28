#include "Carta.h"
#include <string>

Carta::Carta(){
  posx = posy = valor = 0;
}

Carta::Carta(string nombre, double valor){
  this -> nombre = nombre;
  this -> valor = valor;
}

Carta::Carta(int posx, int posy, string nombre, double valor){
  this -> posx = posx;
  this -> posy = posy;
  this -> nombre = nombre;
  this -> valor = valor;
}

int Carta::getX(){
  return posx;
}

int Carta::getY(){
  return posy;
}

string Carta::getNombre(){
  return nombre;
}

double Carta::getValor(){
  return valor;
}

void Carta::setX(int x){
  posx = x;
}

void Carta::setY(int y){
  posy = y;
}

void Carta::setNombre(string name){
  nombre = name;
}

void Carta::setValor(double value){
  valor = value;
}

void Carta::Especial(Carta* carta){

}

Carta::~Carta(){

}



Arma* Carta::getArma(){
  return weapon;
}

Shield* Carta::getShield(){
  return escudo;
}

Magia* Carta::getMagia(){
  return magia;
}

Armadura* Carta::getArmadura(){
  return armor;
}

void Carta::Attack(Carta*){

}

bool Carta::correr(){

}

void Carta::heal(){

}
/*{
    //return os << co.getX() << co.getY() << ' ' << co.getNombre() << co.getValor();
}*/
