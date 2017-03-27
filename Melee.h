#pragma once

#include "Arma.h"

class Melee : public Arma{
  friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Arma>(*this);
        ar & efectividad;
    }
private:
  int efectividad;

public:
  Melee();
  Melee(string, int, int);

  int getEfectividad();

  virtual ~Melee();
};
