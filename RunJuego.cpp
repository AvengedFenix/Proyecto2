#include "RunJuego.h"

RunJuego::RunJuego(){

}

int RunJuego::run(){
    std::vector<Arma*> arma;
    std::vector<Armadura*> armadura;
    std::vector<Magia*> magia;
    std::vector<Shield*> shield;

    std::vector<Personajes*> personajes;

    bool player = false;
    initscr();
    start_color();
    int x,y;
    getmaxyx(stdscr,y,x);
    init_pair(1, COLOR_RED, COLOR_WHITE);
    attron(COLOR_PAIR(1));
    mvprintw(0, y/2, "Welcome to The Witcher RPG");
    mvprintw(3, y/2, "Please enter your username");
    string username = getline();
    int mx = 11;

    char resp = 's';
    while (resp == 's') {
        mvprintw(5, y/2, "a. Play");
        mvprintw(7, y/2, "b. Choose character");
        mvprintw(9, y/2, "c. Modify character");
        char c1 = getch();
        if (c1 == 'a') {
            //Empezar juego vs AI
            //Validar si el usuario elijio un personaje
            //Simulacion();
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
                for ( i = 0; i < personajes.size(); i++) {
                    mvprintw(mx,20,"Poner getName del personaje aqui");
                    mx+=2;
                    mvprintw(mx,24,"Poner los atributos mas relevantes del personaje aqui, HP, Ataque, Escudo, etc.");
                    refresh();
                }//fin for
            }else if (c2 == 'b') {
                mvprintw(mx,20,"Poner getName del personaje aqui");
                mx+=2;
                mvprintw(mx,24,"Poner los atributos mas relevantes del personaje aqui, HP, Ataque, Escudo, etc.");
                refresh();
            }else if (c2 == 'c') {
                mvprintw(mx,20,"Poner getName del personaje aqui");
                mx+=2;
                mvprintw(mx,24,"Poner los atributos mas relevantes del personaje aqui, HP, Ataque, Escudo, etc.");
                refresh();
            }else if (c2 == 'd') {
                mvprintw(mx,20,"Poner getName del personaje aqui");
                mx+=2;
                mvprintw(mx,24,"Poner los atributos mas relevantes del personaje aqui, HP, Ataque, Escudo, etc.");
                refresh();
            }//fin if
            player = true;
            resp = 's';
        }else if (c1 == 'c') {
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
                        for (int i = 0; i armadura.size(); i++) {
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
        }//fin if
    }//fin while
    attroff(COLOR_PAIR(1));
    refresh();
    endwin();
    return 0;
}


RunJuego::~RunJuego(){

}
