#pragma once

#include "Magia.h"

class Ice : public Magia{
  friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Magia>(*this);
        ar & freezedamage;
    }
private:
  int freezedamage;
public:
  Ice();
  Ice(int, int, int);

  int getFreezeDamage();

  virtual ~Ice();


};
