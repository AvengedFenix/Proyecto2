#include <ncurses.h>


using namespace std;

void Simulacion(vector<Bender*>);

int main() {
    initscr();
    start_color();
    int x,y;
    getmaxyx(stdscr,y,x);
    init_pair(1, COLOR_RED, COLOR_WHITE);
    attron(COLOR_PAIR(1));
    mvprintw(0, y/2, "Welcome to The Witcher RPG");
    mvprintw(3, y/2, "Please enter your username");


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
        if (c2 == 'a') {
            /* code */
        }else if (c2 == 'b') {
            /* code */
        }else if (c2 == 'c') {
            /* code */
        }else if (c2 == 'd') {
            /* code */
        }
        //recorrer un vector con cartas de esa faccion
    }else if (c1 == 'c') {
        /* code */
    }


    attroff(COLOR_PAIR(1));
    refresh();
    endwin();
    return 0;
}

void Simulacion(vector<Bender*> v){
        bool seguir = true;
        int turno = 1;
        while (seguir == true) {
            int simu;
            std::cout << "Jugador "<<turno << "Elija su opcion \n1. Attack \n2. Special Attack \n3. Spy \n4. Heal \n5. Run"<< endl;
            std::cin >> simu;
            switch (simu) {
                case 1:{
                    if (turno == 1) {
                        v[J1]->ataqueRegular(v[J2]);
                    }else{
                        v[J2]->ataqueRegular(v[J1]);
                    }
                    break;
                }// fin case 1
                case 2:{
                    if (turno == 1) {
                        v[J1]->ataqueEspecial(v[J2]);
                    }else{
                        v[J2]->ataqueEspecial(v[J1]);
                    }
                    break;
                }//fin case 2
                case 3:{
                    if (turno == 1) {
                        if (typeid(*v[J1]).name() == typeid(Earthbenders).name()) {
                            ((Earthbenders*)v[J1])->espiar(v[J2]);
                        }else{
                            std::cout << "Su personaje no es Earthbender" << endl;
                        }
                    }else{
                        if (typeid(*v[J2]).name() == typeid(Earthbenders).name()) {
                            ((Earthbenders*)v[J2])->espiar(v[J1]);
                        }else{
                            std::cout << "Su personaje no es Earthbender" << endl;
                        }
                    }
                    break;
                }//fin case 3
                case 4:{
                    if (turno == 1) {
                        if (typeid(*v[J1]).name() == typeid(Waterbenders).name()){
                            ((Waterbenders*)v[J1])->heal();
                        }else{
                            std::cout << "Su personaje no es Waterbender" << endl;
                        }
                    }else{
                        if (typeid(*v[J2]).name() == typeid(Waterbenders).name()){
                            ((Waterbenders*)v[J2])->heal();
                        }else{
                            std::cout << "Su personaje no es Waterbender" << endl;
                        }
                    }
                    break;
                }//fin case 4
                case 5:{
                    std::cout << "El jugador: "<< turno << " ha escapado." << endl;
                    seguir = false;
                }

                break;
            }//fin switch
            if (v[J1]->getHP()<=0) {
                std::cout << "El jugador 2 ha ganado" << endl;
                seguir = false;
            }else if (v[J2]->getHP()<=0) {
                std::cout << "El jugador 1 ha ganado" << endl;
                seguir = false;
            }
            if (turno == 1) {
                turno++;
            }else if (turno == 2) {
                turno--;
            }
        }
    }

}
