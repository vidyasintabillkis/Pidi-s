#include <iostream>
#include <ncurses/ncurses.h>
#include <windows.h>

using namespace std; 

void header () {
	initscr();
	mvprintw(3,15,"GAME TEBAK KATA");
	mvprintw(4,6,"================================== \n");
	
		mvprintw (5,20, ".");
		refresh();
		Sleep(500);
		
		mvprintw (5,21, ".");
		refresh();
		Sleep(500);
		
		mvprintw (5,22, ".");
		refresh();
		Sleep(500);
		
		mvprintw (5,23, ".");
		refresh();
		Sleep(500);
		
		mvprintw (5,24, ".");
		refresh();
		Sleep(500);
	
	mvprintw(8,6, "Rules : ");
	mvprintw(9,6, "Kesempatan menjawab hanya diberikan sebanyak 3 kali jika melebihi dianggap kalah ");
	
	
	refresh();
	getch ();
	endwin (); 
}



int main(){
	initscr();
	
	char jawaban[20] = "Tteok Bokki"; 
	char strip_jawaban[20] = "_____ _____"; 
	char tebak; 
	
	header ();  
	printw ("Terdiri dari 10 huruf Makanan ini merupakan Makanan dari Korea"); 
	
//	for(int y=0; y<10; y++){
//		strip_jawaban[y]='_';
//		mvprintw(13,6, "%c", strip_jawaban[y]);
//	}	
	
	
	refresh();
	getch();
	endwin();
	
	return 0; 
}
