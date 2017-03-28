#pragma once

/*#include <boost/serialization/vector.hpp>

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

#include <boost/archive/polymorphic_binary_iarchive.hpp>
#include <boost/archive/polymorphic_binary_oarchive.hpp>

#include <boost/serialization/base_object.hpp>*/
#include <fstream>
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

class Shield{
  /*friend class boost::serialization::access;

  template<class Archive>
   void serialize(Archive &ar, const unsigned int version)
   {
       ar & duracion;
       ar & strength;
   }*/
protected:
  int duracion;
  int strength;
public:
  Shield();
  Shield(int,int);

  int getDuracion();
  int getStrength();

  virtual void idk();

  friend std::ostream & operator<<(std::ostream &os, Shield &co)
  {
      return os << typeid(co).name() << "," << co.duracion << "," << co.strength << ",";
  }

  virtual ~Shield();
};
