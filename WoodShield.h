<<<<<<< HEAD
#pragma once

#include "Shield.h"

class WoodShield : public Shield{
  /*friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Shield>(*this);
    }*/
private:
public:
  WoodShield();
  WoodShield(int, int);

  friend ostream& operator<<(ostream& out, const WoodShield& a){
        out << typeid(a).name() << "," << a.duracion << "," << a.strength << ",";
        return out;
  }

  virtual ~WoodShield();
};
=======
#pragma once

#include "Shield.h"

class WoodShield : public Shield{
private:
public:
  WoodShield();
  WoodShield(int, int);



  virtual ~WoodShield();
};
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
