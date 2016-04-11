#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

void risunok(int a)
{
    WINDOW *ris = subwin(stdscr, 0, 0, getmaxy(stdscr) - 16, getmaxx(stdscr) - 35);
	if ((a <= 6) && (a >= 1)){ 
		switch (a) {
		case 6:
		wprintw(ris, " ******************************** \n");
		wprintw(ris, "!>				<!\n");		
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");		
		wprintw(ris, "!>	 ------------------	<!\n");
		wprintw(ris, "!>       |		  |	<!\n");
		wprintw(ris, "!>				<!\n");		
		wprintw(ris, " ******************************** \n");		
		break;		
		
		case 5:
		wprintw(ris, " ******************************** \n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");		
		wprintw(ris, "!>	|			<!\n");
		wprintw(ris, "!>	|			<!\n");
		wprintw(ris, "!>	|			<!\n");
		wprintw(ris, "!>	|			<!\n");
		wprintw(ris, "!>	|			<!\n");	
		wprintw(ris, "!>	|			<!\n");			
		wprintw(ris, "!>	-------------------	<!\n");
		wprintw(ris, "!>	|		  |	<!\n");
		wprintw(ris, "!>				<!\n");		
		wprintw(ris, " ******************************** \n");
		break;
		
		case 4:
    	wprintw(ris, " ******************************** \n");
		wprintw(ris, "!>				<!\n");		
		wprintw(ris, "!>	-------------		<!\n");
		wprintw(ris, "!>	|			<!\n");
		wprintw(ris, "!>	|			<!\n");
		wprintw(ris, "!>	|			<!\n");
		wprintw(ris, "!>	|			<!\n");
		wprintw(ris, "!>	|			<!\n");
		wprintw(ris, "!>	|			<!\n");
		wprintw(ris, "!>	|			<!\n");
		wprintw(ris, "!>	|			<!\n");		
		wprintw(ris, "!>	|			<!\n");			
		wprintw(ris, "!>	-------------------	<!\n");
		wprintw(ris, "!>	|		  |	<!\n");
		wprintw(ris, "!>				<!\n");		
		wprintw(ris, " ******************************** \n");
		break;
		
		case 3:
		wprintw(ris, " ******************************** \n");
		wprintw(ris, "!>				<!\n");		
		wprintw(ris, "!>	--------------		<!\n");
		wprintw(ris, "!>	|	     |		<!\n");
		wprintw(ris, "!>	|	     |		<!\n");
		wprintw(ris, "!>	|	     -	 	<!\n");
		wprintw(ris, "!>	|	    		<!\n");
		wprintw(ris, "!>	|			<!\n");
		wprintw(ris, "!>	|			<!\n");
		wprintw(ris, "!>	|			<!\n");
		wprintw(ris, "!>	|			<!\n");		
		wprintw(ris, "!>	|			<!\n");			
		wprintw(ris, "!>	-------------------	<!\n");
		wprintw(ris, "!>	|		  |	<!\n");
		wprintw(ris, "!>				<!\n");		
		wprintw(ris, " ******************************** \n");	
		break;

		case 2:
		wprintw(ris, " ******************************** \n");
		wprintw(ris, "!>				<!\n");		
		wprintw(ris, "!>	______________		<!\n");
		wprintw(ris, "!>	|	     |		<!\n");
		wprintw(ris, "!>	|	     |		<!\n");
		wprintw(ris, "!>	|	     -	 	<!\n");
		wprintw(ris, "!>	|	    ( )  	<!\n");
		wprintw(ris, "!>	|	    		<!\n");
		wprintw(ris, "!>	|	    		<!\n");
		wprintw(ris, "!>	|			<!\n");
		wprintw(ris, "!>	|	   _____	<!\n");		
		wprintw(ris, "!>	|	   |   |	<!\n");			
		wprintw(ris, "!>	-------------------	<!\n");
		wprintw(ris, "!>	|		  |	<!\n");
		wprintw(ris, "!>				<!\n");		
		wprintw(ris, " ******************************** \n");	
		break;
		
		case 1:
		wprintw(ris, " ******************************** \n");
		wprintw(ris, "!>				<!\n");		
		wprintw(ris, "!>	______________		<!\n");
		wprintw(ris, "!>	|	     |		<!\n");
		wprintw(ris, "!>	|	     |		<!\n");
		wprintw(ris, "!>	|	     -	 	<!\n");
		wprintw(ris, "!>	|	    (o)  	<!\n");
		wprintw(ris, "!>	|	    /0\\		<!\n");
		wprintw(ris, "!>	|	    / \\		<!\n");
		wprintw(ris, "!>	|			<!\n");
		wprintw(ris, "!>	|	   _____	<!\n");		
		wprintw(ris, "!>	|	   |   |	<!\n");			
		wprintw(ris, "!>	-------------------	<!\n");
		wprintw(ris, "!>	|		  |	<!\n");
		wprintw(ris, "!>				<!\n");		
		wprintw(ris, " ******************************** \n");	
		break;
		}
	}
	else {
		wprintw(ris, " ******************************** \n");
		wprintw(ris, "!>				<!\n");		
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>				<!\n");		
		wprintw(ris, "!>				<!\n");
		wprintw(ris, "!>      		  	<!\n");
		wprintw(ris, "!>				<!\n");		
		wprintw(ris, " ******************************** \n");	
	}
    delwin(ris);	
}
