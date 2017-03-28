<<<<<<< HEAD
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
=======
#include "Carta.h"
#include <string>

Carta::Carta(){
  posx = posy = valor = 0;
}

Carta::Carta(string nombre, int valor){
  this -> nombre = nombre;
  this -> valor = valor;
}

Carta::Carta(int posx, int posy, string nombre, int valor){
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

int Carta::getValor(){
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

void Carta::setValor(int value){
  valor = value;
}

void Carta::Especial(Carta* carta){

}

Carta::~Carta(){

}

void Carta::setArma(Arma* arma){
  weapon = arma;
}

void Carta::setShield(Shield* shield){
  escudo = shield;
}

void Carta::setMagia(Magia* magic){
  magia = magic;
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

Carta::~Carta(){

}
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
