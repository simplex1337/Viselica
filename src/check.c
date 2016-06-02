#include "vis.h"

int check(char guess, char alph[]) {
	if (guess < 'A' || guess > 'z') {
		return 1;
	}
	
	int i;
	for (i=0; i<26; i++) {
		if (guess== alph[i]) {
			return 1;
		}
	}
	for (i=0; i<26; i++) {
		if (alph[i] == '\0') {
			alph[i] = guess;
			return 0;
		}
	}
} 
