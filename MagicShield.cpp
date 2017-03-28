<<<<<<< HEAD

#include "Shield.h"
#include "MagicShield.h"

MagicShield::MagicShield(){
  reflect = 0;
}

MagicShield::MagicShield(int duracion, int strength, int reflect) : Shield(duracion, strength){

}

int MagicShield::getReflect(){
  return reflect;
}

MagicShield::~MagicShield(){

}
=======
#include "Shield.h"
#include "MagicShield.h"

MagicShield::MagicShield(){
  reflect = 0;
}

MagicShield::MagicShield(int duracion, int strength, int reflect) : Shield(duracion, strength){
 this->duracion = duracion;
 this->strength=strength;
  this->reflect = reflect;
}

int MagicShield::getReflect(){
  return reflect;
}

MagicShield::~MagicShield(){

}
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
