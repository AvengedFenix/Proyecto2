<<<<<<< HEAD
#pragma once

#include "Magia.h"

class Ice : public Magia{
  /*friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Magia>(*this);
        ar & freezedamage;
    }*/
private:
  int freezedamage;
public:
  Ice();
  Ice(int, int, int);

  int getFreezeDamage();

  virtual ~Ice();

  friend ostream& operator<<(ostream& out, const Ice& a){
        out << typeid(a).name() << "," << a.damage << "," << a.tiempo << "," << a.freezedamage;
        return out;
  }


};
=======
#pragma once

#include "Magia.h"

class Ice : public Magia{
private:
  int freezedamage;
public:
  Ice();
  Ice(int, int, int);

  int getFreezeDamage();

  virtual ~Ice();


};
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
