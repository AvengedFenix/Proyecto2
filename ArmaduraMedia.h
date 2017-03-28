<<<<<<< HEAD
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
=======
#pragma once

#include "Armadura.h"

class ArmaduraMedia : public Armadura{
public:
  ArmaduraMedia();
  ArmaduraMedia(int, int);
  virtual ~ArmaduraMedia();
};
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
