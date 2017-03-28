#include "Arma.h"
#include "Armadura.h"
#include "ArmaduraLiviana.h"
#include "ArmaduraMedia.h"
#include "ArmaduraPesada.h"
#include "Carta.h"
#include "NorthernRealms.h"
#include "Scoiatael.h"
#include "Monsters.h"
#include "Nilfgaardians.h"
#include "Fire.h"
#include "Ice.h"
#include "Magia.h"
#include "MagicShield.h"
#include "Melee.h"
#include "MetalShield.h"
#include "Ranged.h"
#include "Shield.h"
#include "WoodShield.h"
#include "Jugador.h"
<<<<<<< HEAD
#include <ncurses>
=======
#include <ncurses.h>
>>>>>>> bbee5a64c5fd9d0a6c7f7068e15504ec19a7c167
#include <iostream>
#include <vector>
#include <typeinfo>
#include <string.h>
#include <cstdarg>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <typeinfo>
#include <sys/stat.h>


using namespace std;


class RunJuego {
private:
  /* data */

public:
  RunJuego();
  int run();
  void guardar(vector<Carta*>);
  vector<Carta*> leer();
<<<<<<< HEAD
  int Simulacion(Jugador*,Jugador*);
  virtual ~Run ();
=======

  virtual ~RunJuego();
>>>>>>> bbee5a64c5fd9d0a6c7f7068e15504ec19a7c167
};
