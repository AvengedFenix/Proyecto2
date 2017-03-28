<<<<<<< HEAD
#pragma once

#include "Shield.h"

class MagicShield : public Shield{
  /*friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Shield>(*this);
        ar & reflect;
    }*/
private:
  int reflect;
public:
  MagicShield();
  MagicShield(int, int, int);

  int getReflect();

  friend ostream& operator<<(ostream& out, const MagicShield& a){
        out << typeid(a).name() << "," << a.duracion << "," << a.strength << "," << a.reflect << ",";
        return out;
  }

  virtual ~MagicShield();
};
=======
#pragma once

#include "Shield.h"

class MagicShield : public Shield{
private:
  int reflect;
public:
  MagicShield();
  MagicShield(int, int, int);

  int getReflect();

  virtual ~MagicShield();
};
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
