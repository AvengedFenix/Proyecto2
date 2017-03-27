#pragma once

#include <string>
#include <iostream>
#include <typeinfo>
#include <stdlib.h>

#include "Shield.h"
#include "Magia.h"
#include "Arma.h"


#include <boost/serialization/vector.hpp>

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

#include <boost/archive/polymorphic_binary_iarchive.hpp>
#include <boost/archive/polymorphic_binary_oarchive.hpp>

#include <boost/serialization/base_object.hpp>


using namespace std;

class Carta{

  friend class boost::serialization::access;

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
   }
private:
  int posx;
  int posy;
  string nombre;
  int valor;

  Arma* weapon;
  Shield* escudo;
  Magia* magia;//magia la usamos para ataque especial


public:
  Carta();
  Carta(string, int);
  Carta(int, int, string, int);

  virtual int getX();
  virtual int getY();
  virtual string getNombre();
  virtual int getValor();

  virtual void setX(int);
  virtual void setY(int);
  virtual void setNombre(string);
  virtual void setValor(int);

  void setArma(Arma*);
  void setShield(Shield*);
  void setMagia(Magia*);

  Arma* getArma();
  Shield* getShield();
  Magia* getMagia();

  virtual void Attack(Carta*);
  virtual void Especial(Carta*);
  virtual ~Carta();

  friend std::ostream & operator<<(std::ostream &os, Carta &co)
  {
      return os << co.getX() << co.getY() << ' ' << co.getNombre() << co.getValor();
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
