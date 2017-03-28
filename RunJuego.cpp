#include "RunJuego.h"

RunJuego::RunJuego(){

}

int RunJuego::run(){
    std::vector<Arma*> arma;
    std::vector<Armadura*> armadura;
    std::vector<Magia*> magia;
    std::vector<Shield*> shield;

    std::vector<Carta*> personajes;
    Jugador* jugador1 = new Jugador();
    Jugador* pc = new Jugador();


    ifstream leerpersonajes("./Cartas/Cartas.txt");

    if(leerpersonajes.good()){
      /*cout << "Entro" << endl;
      personajes = leer();*/
      string buffer;

      while(getline(leerpersonajes,buffer)){

        string split[15];//ejemplo que dio el ing. Bocanegra
        int str=0;

        for(int i=0;i<buffer.size();i++){
           if(buffer[i]!=','){
                split[str].append(buffer,i,1);

            }else{
                str++;
            }
        }

        string id =split[0];
        string nombre =split[1];
        double valor = atoi(split[2].c_str());
        string armaid = split[3];
        string armaname = split[4];
        int armadamage = atoi(split[5].c_str());
        string shieldid = split[6];
        int shieldduracion = atoi(split[7].c_str());
        int shieldstrength = atoi(split[8].c_str());
        string magiaid = split[9];
        int magiadamage = atoi(split[10].c_str());
        int magiatiempo = atoi(split[11].c_str());
        string armaduraid = split[12];
        int armadurapeso = atoi(split[13].c_str());
        int armaduraduracion = atoi(split[14].c_str());

        Carta* carta;
        if(id == typeid(Nilfgaardians).name()){
          carta = new Nilfgaardians(nombre, valor);
        }else if(id == typeid(Scoiatael).name()){
          carta = new Scoiatael(nombre, valor);
        }else if(id == typeid(NorthernRealms).name()){
          carta = new NorthernRealms(nombre, valor);
        }else{

        }
        //cout << id << " " << nombre << " " << valor << endl;
        carta -> setArma();
        carta -> setShield();
        carta -> setMagia();
        carta -> setArmadura();

        personajes.push_back(carta);
      }

    leerpersonajes.close();
    }

    bool player = false;
    initscr();
    start_color();
    int x,y;
    getmaxyx(stdscr,y,x);
    init_pair(1, COLOR_RED, COLOR_WHITE);
    attron(COLOR_PAIR(1));
    mvprintw(0, y/2, "Welcome to The Witcher RPG");
    //mvprintw(3, y/2, "Please enter your username");
    //string username = getstr();
    int mx = 11;

    char resp = 's';
    while (resp == 's') {
        refresh();
        mvprintw(5, y/2, "a. Play");
        mvprintw(7, y/2, "b. Choose character");
        mvprintw(9, y/2, "c. Modify character");
        mvprintw(11, y/2, "d. Salir");
        refresh();
        char c1 = getch();
        if (c1 == 'a') {
            //Empezar juego vs AI
            //Validar si el usuario elijio un personaje
            if (player == false) {
                mvprintw(21,30, "Usted no ha seleccionado ningun personaje");
                refresh();
            } else{
                Simulacion(jugador1,pc);
            }//fin else
        }else if (c1 == 'b') {
            refresh();
            char c2;
            mvprintw(11, 20, "Choose a faction");
            mvprintw(13,20,"a. Monsters");
            mvprintw(15,20,"b. Scoia\'tael");
            mvprintw(17,20,"c. Nilfgaardians");
            mvprintw(19,20,"d. NorthernRealms");
            refresh();
            c2 = getch();
            mx = 11;
            if (c2 == 'a') {
                for (int i = 0; i < personajes.size(); i++) {
                  if(typeid(*personajes[i]).name() == typeid(Monsters).name()){
                    stringstream s;
                    refresh();
                    s << i << " " << personajes[i] -> getNombre();
                    const string tmp = s.str();
                    const char* c = tmp.c_str();
                    mvprintw(mx,20, c);
                    mx+=2;
                    stringstream ss;
                    ss << "Arma: " << personajes[i] -> getArma() -> getNombre()<<  " HP: " <<  personajes[i] -> getValor() << endl;
                    const string tmp2 = ss.str();
                    const char* c2 = tmp2.c_str();
                    mvprintw(mx,24, c2);
                    refresh();
                  }
                }//fin for
            }else if (c2 == 'b') {
              for (int i = 0; i < personajes.size(); i++) {
                if(typeid(*personajes[i]).name() == typeid(Scoiatael).name()){
                  stringstream s;
                  refresh();
                  s << i << " " << personajes[i] -> getNombre();
                  const string tmp = s.str();
                  const char* c = tmp.c_str();
                  mvprintw(mx,20, c);
                  mx+=2;
                  stringstream ss;
                  ss << "Arma: " << personajes[i] -> getArma() -> getNombre()<<  " HP: " <<  personajes[i] -> getValor() << endl;
                  const string tmp2 = ss.str();
                  const char* c2 = tmp2.c_str();
                  mvprintw(mx,24, c2);
                  refresh();
                }
              }
            }else if (c2 == 'c') {
              for (int i = 0; i < personajes.size(); i++) {
                if(typeid(*personajes[i]).name() == typeid(Nilfgaardians).name()){
                  stringstream s;
                  refresh();
                  s << i << " " << personajes[i] -> getNombre();
                  const string tmp = s.str();
                  const char* c = tmp.c_str();
                  mvprintw(mx,20, c);
                  mx+=2;
                  stringstream ss;
                  ss << "Arma: " << personajes[i] -> getArma() -> getNombre()<<  " HP: " <<  personajes[i] -> getValor() << endl;
                  const string tmp2 = ss.str();
                  const char* c2 = tmp2.c_str();
                  mvprintw(mx,24, c2);
                  refresh();
                }
              }
            }else if (c2 == 'd') {
              for (int i = 0; i < personajes.size(); i++) {
                if(typeid(*personajes[i]).name() == typeid(NorthernRealms).name()){
                  stringstream s;
                  refresh();
                  s << i << " " << personajes[i] -> getNombre();
                  const string tmp = s.str();
                  const char* c = tmp.c_str();
                  mvprintw(mx,20, c);
                  mx+=2;
                  stringstream ss;
                  ss << "Arma: " << personajes[i] -> getArma() -> getNombre()<<  " HP: " <<  personajes[i] -> getValor() << endl;
                  const string tmp2 = ss.str();
                  const char* c2 = tmp2.c_str();
                  mvprintw(mx,24, c2);
                  refresh();
                }
              }
            }//fin if
            mvprintw(mx,24,"Ingrese index de personaje: ");

            int opcion = getch();


            jugador1 -> setCarta(personajes[opcion]);
            //cout << jugador1 -> getCarta() -> getNombre();



            player = true;
            resp = 's';
        }else if (c1 == 'c') {/*
            if (player == false){
                mvprintw(11,20, "No puede acceder a esta opcion porque no tiene ningun jugador seleccionado");
                resp = 's';
            } else{
                mx = 11;
                mvprintw(11,20, "Que desea modificar?");
                mvprintw(13,24, "a. Shield");
                mvprintw(15,24, "b. Magic");
                mvprintw(17,24, "c. Armor");
                mvprintw(19,24, "d. Weapon\n");
                char modify = getch();
                char submodify;
                if (modify = 'a') {
                    mvprintw(11,20, "a. MagicShield");
                    mvprintw(13,20, "b. WoodShield");
                    mvprintw(15,20, "c. MetalShield\n");
                    submodify = getch();
                    if (submodify = 'a') {
                        //poner solo los magic shields
                        for (int i = 0; i < shield.size(); i++) {
                            mvprintw(mx,22,i);
                            mvprintw(mx,24,". Poner nombres");
                            mx+=2;
                            mvprintw(mx,24,"Atributos relevantes");
                        }//fin for
                    }//fin if
                    if (submodify == 'b') {
                        //poner solo los woodshield
                        for (int i = 0; i < shield.size(); i++) {
                            mvprintw(mx,22,i);
                            mvprintw(mx,24,". Poner nombres");
                            mx+=2;
                            mvprintw(mx,24,"Atributos relevantes");
                        }//fin for
                    }//fin if
                    if (submodify == 'c') {
                        //poner solo los metalshield
                        for (int i = 0; i < shield.size(); i++) {
                            mvprintw(mx,22,i);
                            mvprintw(mx,24,". Poner nombres");
                            mx+=2;
                            mvprintw(mx,24,"Atributos relevantes");
                        }//fin for
                    }//fin if
//------------------------------------------------------------------------------------------------------------------------
                } else if(modify = 'b'){
                    mvprintw(11,20, "a. Fire");
                    mvprintw(13,20, "b. Ice\n");
                    submodify = getch();
                    if (submodify = 'a') {
                        //poner solo los Fire
                        for (int i = 0; i < magic.size(); i++) {
                            mvprintw(mx,22,i);
                            mvprintw(mx,24,". Poner nombres");
                            mx+=2;
                            mvprintw(mx,24,"Atributos relevantes");
                        }//fin for
                    }//fin if
                    if (submodify == 'b') {
                        //poner solo los Ice
                        for (int i = 0; i < magic.size(); i++) {
                            mvprintw(mx,22,i);
                            mvprintw(mx,24,". Poner nombres");
                            mx+=2;
                            mvprintw(mx,24,"Atributos relevantes");
                        }//fin for
                    }//fin if submodify
//----------------------------------------------------------------------------------------------------------------------------
                }else if (modify == 'c') {
                    mvprintw(11,20, "a. Armadura Liviana");
                    mvprintw(13,20, "b. Armadura Media");
                    mvprintw(15,20, "c. ArmaduraPesada\n");
                    submodify = getch();
                    if (submodify = 'a') {
                        //poner solo los armadrua liviana
                        for (int i = 0; i < armadura.size(); i++) {
                            mvprintw(mx,22,i);
                            mvprintw(mx,24,". Poner nombres");
                            mx+=2;
                            mvprintw(mx,24,"Atributos relevantes");
                        }//fin for
                    }//fin if
                    if (submodify == 'b') {
                        //poner solo los media
                        for (int i = 0; i < armadura.size(); i++) {
                            mvprintw(mx,22,i);
                            mvprintw(mx,24,". Poner nombres");
                            mx+=2;
                            mvprintw(mx,24,"Atributos relevantes");
                        }//fin for
                    }//fin if
                    if (submodify == 'c') {
                        //poner solo los pesada
                        for (int i = 0; i <armadura.size(); i++) {
                            mvprintw(mx,22,i);
                            mvprintw(mx,24,". Poner nombres");
                            mx+=2;
                            mvprintw(mx,24,"Atributos relevantes");
                        }//fin for
                    }//fin if
//--------------------------------------------------------------------------------------------------------------------
                }else if (modify == 'd') {
                    mvprintw(11,20, "a. Melee");
                    mvprintw(13,20, "b. Ranged\n");
                    submodify = getch();
                    if (submodify = 'a') {
                        //poner solo los melee
                        for (int i = 0; i < arma.size(); i++) {
                            mvprintw(mx,22,i);
                            mvprintw(mx,24,". Poner nombres");
                            mx+=2;
                            mvprintw(mx,24,"Atributos relevantes");
                        }//fin for
                    }//fin if
                    if (submodify == 'b') {
                        //poner solo los ranged
                        for (int i = 0; i < arma.size(); i++) {
                            mvprintw(mx,22,i);
                            mvprintw(mx,24,". Poner nombres");
                            mx+=2;
                            mvprintw(mx,24,"Atributos relevantes");
                        }//fin for
                    }//fin if submodify
                }//fin if modify
            }//fin else
        }*///fin if
      }else{
        clear();
        refresh();
        guardar(personajes);
        return 0;
      }
      clear();
    }//fin while
    attroff(COLOR_PAIR(1));
    for(int i = 0; i < personajes.size(); i++){
      delete personajes[i];
    }
    guardar(personajes);
    refresh();
    endwin();
    return 0;
}

void RunJuego::guardar(vector<Carta*> cartas){
  ofstream outfile;
  char filename[256] = {0};
  try{
    const int directorio = system("mkdir -p ./Cartas");//-p es para crear directorio solo si no existe
  } catch (...) {
    cout << "Error" << endl;
  }

  strcpy(filename, "./Cartas/Cartas.txt");
  stringstream ss;


  for(int i =0; i<cartas.size() ; i++){
    //Arma* a = cartas[i] -> getArma();
    ss << *cartas[i];
    ss <<  *(cartas[i] -> getArma());
    ss << *(cartas[i] -> getShield());
    ss << *(cartas[i] -> getMagia());
    ss << *(cartas[i] -> getArmadura());
    ss << endl;
  }


  outfile.open(filename/*, std::ios::app*/);
  outfile << ss.str();
  outfile.close();

  vector<Carta*> leercartas = leer();


  /*for(int i =0; i<leercartas.size(); i++){
    cout << *leercartas[i] << endl;
    cout << *(leercartas[i] -> getArma()) << endl;
    cout << *(leercartas[i] -> getShield()) << endl;
    cout << *(leercartas[i] -> getMagia()) << endl;
    cout << *(leercartas[i] -> getArmadura()) << endl;
  }*/
}

vector<Carta*> RunJuego::leer(){
    vector<Carta*> cartas;
    ifstream file("./Cartas/Cartas.txt");
    string buffer;


    while(getline(file,buffer)){

    string split[15];//ejemplo que dio el ing. Bocanegra
    int str=0;

    for(int i=0;i<buffer.size();i++){
       if(buffer[i]!=','){
            split[str].append(buffer,i,1);

        }else{
            str++;
        }
    }

    string id =split[0];
    string nombre =split[1];
    double valor = atoi(split[2].c_str());
    string armaid = split[3];
    string armaname = split[4];
    int armadamage = atoi(split[5].c_str());
    string shieldid = split[6];
    int shieldduracion = atoi(split[7].c_str());
    int shieldstrength = atoi(split[8].c_str());
    string magiaid = split[9];
    int magiadamage = atoi(split[10].c_str());
    int magiatiempo = atoi(split[11].c_str());
    string armaduraid = split[12];
    int armadurapeso = atoi(split[13].c_str());
    int armaduraduracion = atoi(split[14].c_str());

    Carta* carta;
    if(id == typeid(Nilfgaardians).name()){
      carta = new Nilfgaardians(nombre, valor);
    }else if(id == typeid(Scoiatael).name()){
      carta = new Scoiatael(nombre, valor);
    }else if(id == typeid(NorthernRealms).name()){
      carta = new NorthernRealms(nombre, valor);
    }else{

    }
    carta -> setArma();
    carta -> setShield();
    carta -> setMagia();
    carta -> setArmadura();

    cartas.push_back(carta);
  }

  file.close();
  return cartas;
}

int RunJuego::Simulacion(Jugador* jugador, Jugador* PC){
    PC -> setCarta(new Nilfgaardians("Emhyr", 500));
    PC -> getCarta() -> setArma();
    PC -> getCarta() -> setShield();
    PC -> getCarta() -> setMagia();
    PC -> getCarta() -> setArmadura();

    clear();
    mvprintw(0,0,"+");
    mvprintw(1,0,"+");
    mvprintw(2,0,"+");
    mvprintw(3,0,"+");
    mvprintw(4,0,"+");
    mvprintw(5,0,"+");
    mvprintw(6,0,"+");
    mvprintw(7,0,"+");
    mvprintw(0,1,"+");
    mvprintw(0,2,"+");
    mvprintw(0,3,"+");
    mvprintw(0,4,"+");
    mvprintw(0,5,"+");
    mvprintw(0,6,"+");
    mvprintw(0,7,"+");
    mvprintw(1,7,"+");
    mvprintw(2,7,"+");
    mvprintw(3,7,"+");
    mvprintw(4,7,"+");
    mvprintw(5,7,"+");
    mvprintw(6,7,"+");
    mvprintw(7,7,"+");
    mvprintw(7,1,"+");
    mvprintw(7,2,"+");
    mvprintw(7,3,"+");
    mvprintw(7,4,"+");
    mvprintw(7,5,"+");
    mvprintw(7,6,"+");
    mvprintw(2,3,"K");
    mvprintw(5,3,"W");
    while (jugador->getCarta()->getValor()>0 || PC->getCarta()->getValor()>0) {
        mvprintw(4, 10, "Jugador 1, Elija \n1. Attack\n2. Special Attack\n3. Run\n4. Heal\n");
        refresh();
        int sim = getch();
        if (sim == 1) {
          clear();
            jugador->getCarta()->Attack(PC->getCarta());
            mvprintw(4,10, "Dano realizado");
        }else if (sim == 2) {
            jugador->getCarta()->Especial(PC->getCarta());
            mvprintw(4,10, "Dano Especial realizado");
        }else if (sim == 3) {
            if (jugador->getCarta()->correr() == true) {
                mvprintw(4,10,"Jugador ha escapado");
                return 0;
            }else{
                mvprintw(4,10, "No ha podido escapar");
            }//fin else
        }else if (sim == 4) {
            jugador->getCarta()->heal();
            mvprintw(4,10,"Curado con exito");
        }//fin if
//--------------------------------------------------------------------------
        mvprintw(4,10,"La PC va a elegir su movimiento");
        srand(time(NULL));
        int sim2 = rand()%4 +1;
        if (sim2 == 1) {
            PC->getCarta()->Attack(jugador->getCarta());
            refresh();
            mvprintw(4,10, "Dano realizado");
            refresh();
        }else if (sim2 == 2) {
            PC->getCarta()->Especial(jugador->getCarta());
            mvprintw(4,10, "Dano Especial realizado");
        }else if (sim2 == 3) {
            if (PC->getCarta()->correr() == true) {
                mvprintw(4,10,"Jugador ha escapado");
                return 0;
            }else{
                mvprintw(4,10, "No ha podido escapar");
            }//fin else
        }else if (sim2 == 4) {
            PC->getCarta()->heal();
            mvprintw(4,10,"Curado con exito");
        }//fin if
        refresh();
    }//fin while
    if (jugador->getCarta() -> getValor()<=0) {
        mvprintw(4,10, "La PC ha ganado");
        mvprintw(5,3, "X");
    }else if (PC->getCarta() -> getValor()<=0) {
        mvprintw(4,10,"El jugador ha ganado");
        mvprintw(2,3,"X");
    }//fin if
    refresh();
    return 0;
}//fin Simulacion

RunJuego::~RunJuego(){

}
