<<<<<<< HEAD
#include "Monsters.h"
#include "Nilfgaardians.h"
#include "Scoiatael.h"
#include "NorthernRealms.h"

Monsters::Monsters(){

}

Monsters::Monsters(string nombre, double valor) : Carta(nombre, valor){

}

Monsters::Monsters(int posx, int posy, string nombre, double valor) : Carta(posx, posy, nombre, valor){

}

void Monsters::Especial(Carta* carta){
  int ataque = this -> getValor();
  if(typeid(*carta).name() == typeid(Nilfgaardians).name()){
    ataque += this -> getMagia() -> getDamage() + this -> getMagia() -> getDamage()* .20;
  }else if(typeid(*carta).name() == typeid(NorthernRealms).name()){
    ataque += this -> getMagia() -> getDamage() + this -> getMagia() -> getDamage()* .15;
  }else if(typeid(*carta).name() == typeid(Scoiatael).name()){
    ataque += this -> getMagia() -> getDamage() + this -> getMagia() -> getDamage()* .10;
  }else if(typeid(*carta).name() == typeid(Monsters).name()){
    ataque += this -> getMagia() -> getDamage();
  }
  carta -> setValor(carta -> getValor() - ataque);
}

void Monsters::Attack(Carta* carta){
  if(typeid(*carta).name() == typeid(Nilfgaardians).name()){
    this -> heal();
  }
  carta -> setValor(carta -> getValor() - this -> getArma() -> getDamage());

}

void Monsters::setArmadura(){
  armor = new ArmaduraMedia(40, 20);
}

void Monsters::setArma(){
  weapon = new Melee("Claws", 130, 10);
}

void Monsters::setShield(){
  escudo = new MetalShield(60, 40);
}

void Monsters::setMagia(){
  magia = new Fire(40, 30, 20);
}

bool Monsters::correr(){
  if(valor > 200){
    return true;
  }else{
    return false;
  }
}

void Monsters::heal(){
  this -> valor += 60;
}

Monsters::~Monsters(){

}
=======
#include "Monsters.h"

Monsters::Monsters(){

}

Monsters::Monsters(string nombre, int valor) : Carta(nombre, valor){

}

Monsters::Monsters(int posx, int posy, string nombre, int valor) : Carta(posx, posy, nombre, valor){

}

void Monsters::Especial(Carta* carta){
  carta -> setValor((carta -> getValor())/* - cualquier valor*/);
}

void Monsters::Attack(Carta* carta){
  
}
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
