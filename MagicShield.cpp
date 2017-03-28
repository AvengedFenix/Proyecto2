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
