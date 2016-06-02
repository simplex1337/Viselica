#include "vis.h"          //функция, которая отображает
                         //слово, из букв, которые
                        //были отгаданы

int asteriks(char word[], char cens[], char guess, int life, int donth)
{
	if (donth == 1) {
		return life;
	}
    int i, flg = 0;
    for (i = 0; i < strlen(word); i++) {
        if (guess == word[i] || (guess - 32) == word[i]
                             || (guess + 32) == word[i]) {
            cens[i] = word[i];
            flg++;
        }
        if (cens[i] != '*' && cens[i] != '\0')
            cens[i] = cens[i];
        else 
            cens[i] = '*';
    }
    if (flg == 0)
         life--;
    return life;
}
