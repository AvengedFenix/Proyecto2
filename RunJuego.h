#include "Arma.h"
#include "Armadura.h"
#include "ArmaduraLiviana.h"
#include "ArmaduraMedia.h"
#include "ArmaduraPesada.h"
#include "Fire.h"
#include "Ice.h"
#include "Magia.h"
#include "MagicShield.h"
#include "Melee.h"
#include "MetalShield.h"
#include "Ranged.h"
#include "Shield.h"
#include "WoodShield.h"
#include <ncurses>
#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;


class RunJuego {
private:
  /* data */

public:
  RunJuego();
  int run();
  virtual ~Run ();
};
