<<<<<<< HEAD
#pragma once

#include "Arma.h"

class Melee : public Arma{
  /*friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Arma>(*this);
        ar & efectividad;
    }*/
private:
  int efectividad;

public:
  Melee();
  Melee(string, int, int);

  int getEfectividad();


  friend ostream & operator<<(ostream& out, const Melee& a){
        out << typeid(a).name() << "," << a.nombre << "," << a.damage << "," << a.efectividad << ",";
        return out;
  }


  virtual ~Melee();
};
=======
#pragma once

#include "Arma.h"

class Melee : public Arma{
private:
  int efectividad;

public:
  Melee();
  Melee(string, int, int);

  int getEfectividad();

  virtual ~Melee();
};
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
