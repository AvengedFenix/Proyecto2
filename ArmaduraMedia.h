#pragma once

#include "Armadura.h"

class ArmaduraMedia : public Armadura{
  /*friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Armadura>(*this);
    }*/
public:
  ArmaduraMedia();
  ArmaduraMedia(int, int);
  virtual ~ArmaduraMedia();
};
