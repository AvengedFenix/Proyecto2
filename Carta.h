#pragma once

#include <string>
#include <iostream>
#include <typeinfo>
#include <fstream>
#include <stdlib.h>

#include "Shield.h"
#include "MagicShield.h"
#include "MetalShield.h"
#include "WoodShield.h"
#include "Magia.h"
#include "Fire.h"
#include "Ice.h"
#include "Arma.h"
#include "Ranged.h"
#include "Melee.h"
#include "Armadura.h"
#include "ArmaduraLiviana.h"
#include "ArmaduraMedia.h"
#include "ArmaduraPesada.h"


/*#include <boost/serialization/vector.hpp>

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

#include <boost/archive/polymorphic_binary_iarchive.hpp>
#include <boost/archive/polymorphic_binary_oarchive.hpp>

#include <boost/serialization/base_object.hpp>*/



using namespace std;

class Carta{

  /*friend class boost::serialization::access;

  template<class Archive>
   void serialize(Archive &ar, const unsigned int version)
   {
       ar & posx;
       ar & posy;
       ar & nombre;
       ar & valor;

       ar & weapon;
       ar & escudo;
       ar & magia;
   }*/
protected:
  int posx;
  int posy;
  string nombre;
  double valor;

  Arma* weapon;
  Shield* escudo;
  Magia* magia;//magia la usamos para ataque especial
  Armadura* armor;


public:
  Carta();
  Carta(string, double);
  Carta(int, int, string, double);

  int getX();
  int getY();
  string getNombre();
  double getValor();

  virtual void setX(int);
  virtual void setY(int);
  virtual void setNombre(string);
  virtual void setValor(double);

  virtual void setArma() = 0;
  virtual void setShield() = 0;
  virtual void setMagia() = 0;
  virtual void setArmadura() = 0;

  Arma* getArma();
  Shield* getShield();
  Magia* getMagia();
  Armadura* getArmadura();

  virtual void Attack(Carta*);
  virtual void Especial(Carta*);
  virtual bool correr();
  virtual void heal();
  virtual ~Carta();

  friend std::ostream & operator<<(std::ostream &os, Carta &co)
  {
      return os << typeid(co).name() << "," << co.nombre << "," << co.valor << ",";
  }


  /*friend ostream& operator<<(ostream& out, const Carta& a){
     out <<a.posx<<","<<a.posy<<","<< a.nombre<<","<<a.valor << ", " << a.weapon -> getNombre()
     << ", " << a.weapon -> getDamage() << ", "
     << a.escudo -> getDuracion() << ", " << a.escudo -> getStrength() << ", "
     << a.magia -> getDamage() << ", " << a.magia -> getTiempo() << endl;
     return out;
  }

  friend istream& operator>>(istream& in, Carta& a){
    // char buffer[256];
    string buffer;
    getline(in,buffer);



     string split[10];
     int str=0;

     for(int i=0;i<buffer.size();i++){
       if(buffer[i]!=','){
             split[str].append(buffer,i,1);

        }else{
             str++;
        }
     }


     a.posx=atoi(split[0].c_str());
     a.posy=atoi(split[1].c_str());
     a.nombre=split[2];
     a.valor=atoi(split[3].c_str());

     string weaponNombre = split[4];
     int weaponDamage = atoi(split[5].c_str());

     a.weapon = new Arma(weaponNombre, weaponDamage);

     int duracion = atoi(split[6].c_str());
     int strength = atoi(split[7].c_str());
     a.escudo = new Shield(duracion, strength);

     int MagicDamage = atoi(split[8].c_str());
     int MagicTime = atoi(split[9].c_str());

     a.magia = new Magia(MagicDamage, MagicTime);

     return in;
   }*/




};
