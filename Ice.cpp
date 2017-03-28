
#include "Magia.h"
#include "Ice.h"

Ice::Ice(){
  freezedamage = 0;
}

Ice::Ice(int damage, int tiempo, int freeze) : Magia(damage, tiempo){
  freezedamage = freeze;
}

int Ice::getFreezeDamage(){
  return freezedamage;
}

Ice::~Ice(){

}
