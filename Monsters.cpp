#include "Monsters.h"
#include "Nilfgaardians.h"
#include "Scoiatael.h"
#include "NorthernRealms.h"

Monsters::Monsters(){

}

Monsters::Monsters(string nombre, int valor) : Carta(nombre, valor){

}

Monsters::Monsters(int posx, int posy, string nombre, int valor) : Carta(posx, posy, nombre, valor){

}

void Monsters::Especial(Carta* carta){
  int ataque = this -> getValor();
  if(typeid(*carta).name() == typeid(Nilfgaardians).name()){
    ataque += this -> getMagia() -> getDamage() * .20;
  }else if(typeid(*carta).name() == typeid(NorthernRealms).name()){
    ataque += this -> getMagia() -> getDamage() * .15;
  }else if(typeid(*carta).name() == typeid(Scoiatael).name()){
    ataque += this -> getMagia() -> getDamage() * .10;
  }else if(typeid(*carta).name() == typeid(Monsters).name()){

  }
  carta -> setValor(carta -> getValor() - ataque);
}

void Monsters::Attack(Carta* carta){

}


Monsters::~Monsters(){
  
}
