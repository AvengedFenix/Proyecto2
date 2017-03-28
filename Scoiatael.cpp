#include "Monsters.h"
#include "Nilfgaardians.h"
#include "Scoiatael.h"
#include "NorthernRealms.h"

Scoiatael::Scoiatael(){

}

Scoiatael::Scoiatael(string nombre, double valor) : Carta(nombre, valor){

}

Scoiatael::Scoiatael(int posx, int posy, string nombre, double valor) : Carta(posx, posy, nombre, valor){

}

void Scoiatael::Especial(Carta* carta){
  int ataque = this -> getValor();
  if(typeid(*carta).name() == typeid(Nilfgaardians).name()){
    ataque += this -> getMagia() -> getDamage() + this -> getMagia() -> getDamage()* .20;
  }else if(typeid(*carta).name() == typeid(NorthernRealms).name()){
    ataque += this -> getMagia() -> getDamage() + this -> getMagia() -> getDamage()* .5;
  }else if(typeid(*carta).name() == typeid(Scoiatael).name()){
    ataque += this -> getMagia() -> getDamage();
  }else if(typeid(*carta).name() == typeid(Monsters).name()){
    ataque += this -> getMagia() -> getDamage() + this -> getMagia() -> getDamage()* .15;
  }
  carta -> setValor(carta -> getValor() - ataque);
}

void Scoiatael::Attack(Carta* carta){
  if(typeid(*carta).name() == typeid(NorthernRealms).name()){
    this -> heal();
  }
  carta -> setValor(carta -> getValor() - this -> getArma() -> getDamage());
}

Scoiatael::~Scoiatael(){

}

void Scoiatael::setArmadura(){
  armor = new ArmaduraLiviana(40,20);
}

void Scoiatael::setArma(){
  weapon = new Ranged("Crossbow" , 180, 20);
  //new arma con damage 100

}

void Scoiatael::setShield(){
  escudo = new MetalShield(15, 40);
}

void Scoiatael::setMagia(){
  magia = new Fire(40, 25, 15);
}

bool Scoiatael::correr(){
  if((int)valor % 2 == 0){
    return true;
  }else{
    return false;
  }
}

void Scoiatael::heal(){
  valor += 70;
}
