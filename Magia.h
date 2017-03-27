#pragma once

#include <boost/serialization/vector.hpp>

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

#include <boost/archive/polymorphic_binary_iarchive.hpp>
#include <boost/archive/polymorphic_binary_oarchive.hpp>

#include <boost/serialization/base_object.hpp>
#include <string>

class Magia{
  friend class boost::serialization::access;

  template<class Archive>
   void serialize(Archive &ar, const unsigned int version)
   {
       ar & damage;
       ar & tiempo;
   }
private:
  int damage;
  int tiempo; // time to cast
public:
  Magia();
  Magia(int, int);

  int getDamage();
  int getTiempo();

  virtual void idk();

  friend std::ostream & operator<<(std::ostream &os, Magia &co)
  {
      return os << co.getDamage() << co.getTiempo();
  }
  virtual ~Magia();
};
