#include "Magia.h"

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
