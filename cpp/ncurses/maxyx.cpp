#include <ncurses.h>
#include <iostream>
#include <unistd.h>

int main(){
	
	initscr();
	int x,y;
        int xOrig, yOrig;
	getmaxyx(stdscr,y,x);
        curs_set(0);
        nodelay(stdscr, true);
        noecho();
        int c;

        xOrig = x/2;
        yOrig = y/2;


        while((c=getch())!=27){
        mvprintw(yOrig,xOrig,"#");

        refresh();

        if(xOrig<10) xOrig++;
        else if (xOrig==10 && yOrig<10) yOrig++;
        else if (xOrig>x/2) xOrig--;
        else if (xOrig==0 && xOrig>0) yOrig--;

        usleep(500000);
        }
	endwin();	

	return 0;
}
