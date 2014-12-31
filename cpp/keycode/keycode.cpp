#include <ncurses.h>

int main(){
	initscr();
	noecho();
	raw();
	int c;
	while((c=getch())!=27){
		mvprintw(0,0,"Keycode: %d",c,c);
		refresh();
		mvprintw(1,0,"Character: %c",c,c);
		refresh();
	}
	endwin();
	return 0;
}
