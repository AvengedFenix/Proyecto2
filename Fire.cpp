<<<<<<< HEAD
#include "Magia.h"
#include "Fire.h"

Fire::Fire(){
  burndamage = 0;
}

Fire::Fire(int damage, int tiempo, int burn) : Magia(damage, tiempo){
  burndamage = burn;
}

int Fire::getBurnDamage(){
  return burndamage;
}

Fire::~Fire(){

}
=======
#include "Magia.h"
#include "Fire.h"

Fire::Fire(){
  burndamage = 0;
}

Fire::Fire(int damage, int tiempo, int burn) : Magia(damage, tiempo){
  burndamage = burn;
  this->damage = damage;
  this->tiempo = tiempo;
}

int Fire::getBurnDamage(){
  return burndamage;
}

Fire::~Fire(){

}
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
