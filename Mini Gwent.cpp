#include <ncurses.h>


using namespace std;

int main() {
    initscr();
    start_color();
    int x,y;
    getmaxyx(stdscr,y,x);
    init_pair(1, COLOR_RED, COLOR_WHITE);
    attron(COLOR_PAIR(1));
    mvprintw(0, y/2, "Welcome to The Witcher RPG");
    mvprintw(3, y/2, "Please enter your username");

    //AQUI VALIDACION SI EL JUGADOR EXISTE
    mvprintw(5, y/2, "a. Play");
    mvprintw(7, y/2, "b. Create deck");
    mvprintw(9, y/2, "c. Modify deck ");
    char c1 = getch();
    if (c1 == 'a') {
        //Empezar juego vs AI
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
