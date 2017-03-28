<<<<<<< HEAD

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
=======
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
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
