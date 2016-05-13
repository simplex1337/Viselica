#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

int main()
{
	initscr();
	WINDOW *ris = subwin(stdscr, 0, 0, getmaxy(stdscr) - 16, getmaxx(stdscr) - 10);
	int a = 3;	
	//if ((a <= 12) && (a >= 1)){ 
		//switch (a) {
			//case 3:
					wprintw(ris,      "\t###################\n");     
       					wprintw(ris,    "\t#######################\n");	
				wprintw(ris,            "\t######^^^^^^^^^^^^^######\n");
  				wprintw(ris,           "\t#####^^^^^^^^^^^^^^^^^######\n");
    				wprintw(ris,          "\t####^^^^^^^^^^^^^^^^^^^^^#####\n");
  				wprintw(ris,         "\t####^^^^^^^^^^^^^^^^^^^^^^^#####\n");
		        	 wprintw(ris,       "\t####^^^^^####^^^^^^^^^####^^^^###\n");
		                 wprintw(ris,       "\t###^^^^^######^^^^^^^######^^^####\n");
		   		wprintw(ris,       "\t####^^^^^######^^^^^^^######^^^^###\n");
				wprintw(ris,       "\t###^^^^^^^####^^^^^^^^^####^^^^^####\n");
  				wprintw(ris,       "\t###^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^###\n");
 				wprintw(ris,       "\t###^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^###\n");
 				wprintw(ris,       "\t###^^^^##^^^^^^^^^^^^^^^^^##^^^^^###\n");
 				wprintw(ris,       "\t###^^^^###^^^^^^^^^^^^^^^^##^^^^####\n");
				wprintw(ris,       "\t####^^^^###^^^^^^^^^^^^^^###^^^^###\n");
				wprintw(ris,       " \t###^^^^####^^^^^^^^^^^####^^^^####\n");
				wprintw(ris,         "\t####^^^^######^^^^^######^^^^^###\n");
				wprintw(ris,         " \t####^^^^###############^^^^#####\n");
				wprintw(ris,          " \t####^^^^^###########^^^^^#####\n");
				wprintw(ris,          " \t#####^^^^^^^^^^^^^^^^^######\n");
      				wprintw(ris,             "\t#########################\n");
        			wprintw(ris,              " \t#####################\n");
	refresh();
	delwin(ris);
	 endwin();
			//break;
	//			}
//}
}
