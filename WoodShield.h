#pragma once

#include "Shield.h"

class WoodShield : public Shield{
  friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Shield>(*this);
    }
private:
public:
  WoodShield();
  WoodShield(int, int);



  virtual ~WoodShield();
};
