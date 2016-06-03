#include "vis.h" 
//программа получает количество жизней "а"
//и по этим количествам строится рисунок виселицы
// Сделал Даня!
void risunok_hd(int a)
{
    WINDOW *ris =
        subwin(stdscr, 32, 0, (getmaxy(stdscr) - 32) / 2, getmaxx(stdscr) - 66);
    if ((a <= 12) && (a >= 1)) {
        switch (a) {
            case 12:
                wprintw(ris,
                        " **************************************************************** \n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>			  	    			      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>				-----------		      <!\n");
                wprintw(ris,
                        "!>				|	  | 		      <!\n");
                wprintw(ris,
                        "!>		   	 -------|	  | 		      <!\n");
                wprintw(ris,
                        "!>			 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>			 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	------------------------------------------------      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        " **************************************************************** \n");
                break;

            case 11:
                wprintw(ris,
                        " **************************************************************** \n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|		  	    			      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|			-----------		      <!\n");
                wprintw(ris,
                        "!>	|			|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|	   	 -------|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	------------------------------------------------      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        " **************************************************************** \n");
                break;

            case 10:
                wprintw(ris,
                        " **************************************************************** \n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>	------------------------------			      <!\n");
                wprintw(ris,
                        "!>	|			      			      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|		  	    			      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|			-----------		      <!\n");
                wprintw(ris,
                        "!>	|			|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|	   	 -------|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	------------------------------------------------      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        " **************************************************************** \n");
                break;

            case 9:
                wprintw(ris,
                        " **************************************************************** \n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>	------------------------------			      <!\n");
                wprintw(ris,
                        "!>	|			     | 			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|				 		      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|		  	    			      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|			-----------		      <!\n");
                wprintw(ris,
                        "!>	|			|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|	   	 -------|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	------------------------------------------------      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        " **************************************************************** \n");
                break;

            case 8:
                wprintw(ris,
                        " **************************************************************** \n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>	------------------------------			      <!\n");
                wprintw(ris,
                        "!>	|			     | 			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			    / \\	 		      <!\n");
                wprintw(ris,
                        "!>	|			   /   \\		      <!\n");
                wprintw(ris,
                        "!>	|			   \\   /		      <!\n");
                wprintw(ris,
                        "!>	|			    \\ /			      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|		  	    			      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|			-----------		      <!\n");
                wprintw(ris,
                        "!>	|			|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|	   	 -------|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	------------------------------------------------      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        " **************************************************************** \n");
                break;

            case 7:
                wprintw(ris,
                        " **************************************************************** \n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>	------------------------------			      <!\n");
                wprintw(ris,
                        "!>	|			     | 			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			    / \\	 		      <!\n");
                wprintw(ris,
                        "!>	|			   /   \\		      <!\n");
                wprintw(ris,
                        "!>	|			   \\   /		      <!\n");
                wprintw(ris,
                        "!>	|			    \\ /			      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|		  	    			      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|			-----------		      <!\n");
                wprintw(ris,
                        "!>	|			|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|	   	 -------|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	------------------------------------------------      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        " **************************************************************** \n");
                break;

            case 6:
                wprintw(ris,
                        " **************************************************************** \n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>	------------------------------			      <!\n");
                wprintw(ris,
                        "!>	|			     | 			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			    / \\	 		      <!\n");
                wprintw(ris,
                        "!>	|			   /   \\		      <!\n");
                wprintw(ris,
                        "!>	|			   \\   /		      <!\n");
                wprintw(ris,
                        "!>	|			    \\_/			      <!\n");
                wprintw(ris,
                        "!>	|			    | |   		      <!\n");
                wprintw(ris,
                        "!>	|			    | | 		      <!\n");
                wprintw(ris,
                        "!>	|			    | |			      <!\n");
                wprintw(ris,
                        "!>	|			    | |			      <!\n");
                wprintw(ris,
                        "!>	|			    | |			      <!\n");
                wprintw(ris,
                        "!>	|			    | |			      <!\n");
                wprintw(ris,
                        "!>	|		  	    |_|			      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|			-----------		      <!\n");
                wprintw(ris,
                        "!>	|			|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|	   	 -------|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	------------------------------------------------      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        " **************************************************************** \n");
                break;

            case 5:
                wprintw(ris,
                        " **************************************************************** \n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>	------------------------------			      <!\n");
                wprintw(ris,
                        "!>	|			     | 			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			    / \\	 		      <!\n");
                wprintw(ris,
                        "!>	|			   /   \\		      <!\n");
                wprintw(ris,
                        "!>	|			   \\   /		      <!\n");
                wprintw(ris,
                        "!>	|			    \\_/			      <!\n");
                wprintw(ris,
                        "!>	|			    | |   		      <!\n");
                wprintw(ris,
                        "!>	|			    | |\\ 		      <!\n");
                wprintw(ris,
                        "!>	|			    | |	\\		      <!\n");
                wprintw(ris,
                        "!>	|			    | |	 \\		      <!\n");
                wprintw(ris,
                        "!>	|			    | |	  0		      <!\n");
                wprintw(ris,
                        "!>	|			    | |			      <!\n");
                wprintw(ris,
                        "!>	|		  	    |_|			      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|			-----------		      <!\n");
                wprintw(ris,
                        "!>	|			|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|	   	 -------|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	------------------------------------------------      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        " **************************************************************** \n");
                break;

            case 4:
                wprintw(ris,
                        " **************************************************************** \n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>	------------------------------			      <!\n");
                wprintw(ris,
                        "!>	|			     | 			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			    / \\ 		      <!\n");
                wprintw(ris,
                        "!>	|			   /   \\		      <!\n");
                wprintw(ris,
                        "!>	|			   \\   /		      <!\n");
                wprintw(ris,
                        "!>	|			    \\_/			      <!\n");
                wprintw(ris,
                        "!>	|			    | |   		      <!\n");
                wprintw(ris,
                        "!>	|			   /| |\\ 		      <!\n");
                wprintw(ris,
                        "!>	|			  / | |	\\		      <!\n");
                wprintw(ris,
                        "!>	|			 /  | |	 \\		      <!\n");
                wprintw(ris,
                        "!>	|			0   | |	  0		      <!\n");
                wprintw(ris,
                        "!>	|			    | |			      <!\n");
                wprintw(ris,
                        "!>	|		  	    |_|			      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|			-----------		      <!\n");
                wprintw(ris,
                        "!>	|			|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|	   	 -------|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	------------------------------------------------      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        " **************************************************************** \n");
                break;

            case 3:
                wprintw(ris,
                        " **************************************************************** \n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>	------------------------------			      <!\n");
                wprintw(ris,
                        "!>	|			     | 			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			    / \\	 		      <!\n");
                wprintw(ris,
                        "!>	|			   /   \\		      <!\n");
                wprintw(ris,
                        "!>	|			   \\   /		      <!\n");
                wprintw(ris,
                        "!>	|			    \\_/			      <!\n");
                wprintw(ris,
                        "!>	|			    | |   		      <!\n");
                wprintw(ris,
                        "!>	|			   /| |\\ 		      <!\n");
                wprintw(ris,
                        "!>	|			  / | |	\\		      <!\n");
                wprintw(ris,
                        "!>	|			 /  | |	 \\		      <!\n");
                wprintw(ris,
                        "!>	|			0   | |	  0		      <!\n");
                wprintw(ris,
                        "!>	|			    | |			      <!\n");
                wprintw(ris,
                        "!>	|		  	    |_|			      <!\n");
                wprintw(ris,
                        "!>	|			    /			      <!\n");
                wprintw(ris,
                        "!>	|			   /			      <!\n");
                wprintw(ris,
                        "!>	|			  /			      <!\n");
                wprintw(ris,
                        "!>	|			 0			      <!\n");
                wprintw(ris,
                        "!>	|			-----------		      <!\n");
                wprintw(ris,
                        "!>	|			|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|	   	 -------|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	------------------------------------------------      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        " **************************************************************** \n");
                break;

            case 2:
                wprintw(ris,
                        " **************************************************************** \n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>	------------------------------			      <!\n");
                wprintw(ris,
                        "!>	|			     | 			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			    / \\	 		      <!\n");
                wprintw(ris,
                        "!>	|			   /   \\		      <!\n");
                wprintw(ris,
                        "!>	|			   \\   /		      <!\n");
                wprintw(ris,
                        "!>	|			    \\_/			      <!\n");
                wprintw(ris,
                        "!>	|			    | |   		      <!\n");
                wprintw(ris,
                        "!>	|			   /| |\\ 		      <!\n");
                wprintw(ris,
                        "!>	|			  / | |	\\		      <!\n");
                wprintw(ris,
                        "!>	|			 /  | |	 \\		      <!\n");
                wprintw(ris,
                        "!>	|			0   | |	  0		      <!\n");
                wprintw(ris,
                        "!>	|			    | |			      <!\n");
                wprintw(ris,
                        "!>	|		  	    |_|			      <!\n");
                wprintw(ris,
                        "!>	|			    / \\			      <!\n");
                wprintw(ris,
                        "!>	|			   /   \\		      <!\n");
                wprintw(ris,
                        "!>	|			  /	\\		      <!\n");
                wprintw(ris,
                        "!>	|			 0	 0		      <!\n");
                wprintw(ris,
                        "!>	|			-----------		      <!\n");
                wprintw(ris,
                        "!>	|			|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|	   	 -------|	  | 		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	|		 |	|	  |		      <!\n");
                wprintw(ris,
                        "!>	------------------------------------------------      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        " **************************************************************** \n");
                break;

            case 1:
                wprintw(ris,
                        " **************************************************************** \n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        "!>	------------------------------			      <!\n");
                wprintw(ris,
                        "!>	|			     | 			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			     |			      <!\n");
                wprintw(ris,
                        "!>	|			    / \\	 		      <!\n");
                wprintw(ris,
                        "!>	|			   /   \\		      <!\n");
                wprintw(ris,
                        "!>	|			   \\   /		      <!\n");
                wprintw(ris,
                        "!>	|			    \\_/			      <!\n");
                wprintw(ris,
                        "!>	|			    | |   		      <!\n");
                wprintw(ris,
                        "!>	|			   /| |\\ 		      <!\n");
                wprintw(ris,
                        "!>	|			  / | |	\\		      <!\n");
                wprintw(ris,
                        "!>	|			 /  | |	 \\		      <!\n");
                wprintw(ris,
                        "!>	|			0   | |	  0		      <!\n");
                wprintw(ris,
                        "!>	|			    | |			      <!\n");
                wprintw(ris,
                        "!>	|		  	    |_|			      <!\n");
                wprintw(ris,
                        "!>	|			    / \\			      <!\n");
                wprintw(ris,
                        "!>	|			   /   \\		      <!\n");
                wprintw(ris,
                        "!>	|			  /	\\		      <!\n");
                wprintw(ris,
                        "!>	|			 0	 0		      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	|						      <!\n");
                wprintw(ris,
                        "!>	------------------------------------------------      <!\n");
                wprintw(ris,
                        "!>	|                                              |      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>	|				               |      <!\n");
                wprintw(ris,
                        "!>							      <!\n");
                wprintw(ris,
                        " **************************************************************** \n");
                break;


        }
    } else {
        wprintw(ris,
                " **************************************************************** \n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>			  	    			      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>				   			      <!\n");
        wprintw(ris,
                "!>				 	   		      <!\n");
        wprintw(ris,
                "!>		   	 		   		      <!\n");
        wprintw(ris,
                "!>			 		  		      <!\n");
        wprintw(ris,
                "!>			 		  		      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                "!>					                      <!\n");
        wprintw(ris,
                "!>					                      <!\n");
        wprintw(ris,
                "!>							      <!\n");
        wprintw(ris,
                " **************************************************************** \n");
    }
    box(ris, 0, 0);
    //delwin(ris);
}
