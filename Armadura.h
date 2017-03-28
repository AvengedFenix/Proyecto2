<<<<<<< HEAD
#pragma once
#include <iostream>
#include <typeinfo>

/*#include <boost/serialization/vector.hpp>

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

#include <boost/archive/polymorphic_binary_iarchive.hpp>
#include <boost/archive/polymorphic_binary_oarchive.hpp>

#include <boost/serialization/base_object.hpp>*/

class Armadura{
  /*friend class boost::serialization::access;

  template<class Archive>
   void serialize(Archive &ar, const unsigned int version)
   {
       ar & peso;
       ar & duracion;
   }*/
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
      return os << typeid(co).name() << "," << co.peso << "," << co.duracion;
  }

  virtual ~Armadura();
};
=======
#pragma once

class Armadura{
private:
  int peso;
  int duracion;

public:
  Armadura();

  Armadura(int, int);

  int getPeso();
  int getDuracion();

  virtual ~Armadura();
};
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
