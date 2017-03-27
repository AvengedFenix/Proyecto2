#pragma once

#include "Armadura.h"

class ArmaduraLiviana : public Armadura{
  friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Armadura>(*this);
    }
public:
  ArmaduraLiviana();
  ArmaduraLiviana(int, int);
  virtual ~ArmaduraLiviana();
};
