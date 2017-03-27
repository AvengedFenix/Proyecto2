#pragma once

#include <boost/serialization/vector.hpp>

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

#include <boost/archive/polymorphic_binary_iarchive.hpp>
#include <boost/archive/polymorphic_binary_oarchive.hpp>

#include <boost/serialization/base_object.hpp>

class Armadura{
  friend class boost::serialization::access;

  template<class Archive>
   void serialize(Archive &ar, const unsigned int version)
   {
       ar & peso;
       ar & duracion;
   }
private:
  int peso;
  int duracion;

public:
  Armadura();

  Armadura(int, int);

  int getPeso();
  int getDuracion();

  friend std::ostream & operator<<(std::ostream &os, Armadura &co)
  {
      return os << co.getPeso()  << co.getDuracion();
  }

  virtual ~Armadura();
};
