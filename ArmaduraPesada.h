#pragma once

#include "Armadura.h"

class ArmaduraPesada : public Armadura{
  /*friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Armadura>(*this);
    }*/
public:
  ArmaduraPesada();
  ArmaduraPesada(int, int);
  virtual ~ArmaduraPesada();
};
