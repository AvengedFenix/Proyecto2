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
