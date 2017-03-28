#pragma once

/*#include <boost/serialization/vector.hpp>

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

#include <boost/archive/polymorphic_binary_iarchive.hpp>
#include <boost/archive/polymorphic_binary_oarchive.hpp>

#include <boost/serialization/base_object.hpp>*/
#include <typeinfo>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Arma{
  /*friend class boost::serialization::access;

  template<class Archive>
   void serialize(Archive &ar, const unsigned int version)
   {
       ar & nombre;
       ar & damage;
   }*/
protected:
  string nombre;
  int damage;
public:
  Arma();
  Arma(string, int);
  string getNombre();
  int getDamage();
  virtual void idk();
  virtual ~Arma();

  friend ostream& operator<<(ostream& out, const Arma& a){
        out << typeid(a).name() << "," << a.nombre << "," << a.damage << ",";
        return out;
  }


};
