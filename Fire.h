<<<<<<< HEAD
#pragma once

#include "Magia.h"

class Fire : public Magia{
  /*friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Magia>(*this);
        ar & burndamage;
    }*/
private:
  int burndamage;
public:
  Fire();
  Fire(int, int, int);

  int getBurnDamage();

  virtual ~Fire();

  friend ostream& operator<<(ostream& out, const Fire& a){
        out << typeid(a).name() << "," << a.damage << "," << a.tiempo << "," << a.burndamage;
        return out;
  }


};
=======
#pragma once

#include "Magia.h"

class Fire : public Magia{
private:
  int burndamage;
public:
  Fire();
  Fire(int, int, int);

  int getBurnDamage();

  virtual ~Fire();


};
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
