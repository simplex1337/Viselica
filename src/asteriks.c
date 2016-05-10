#include <stdio.h>          //функция, которая отображает
#include <string.h>         //слово, из букв, которые
#include <stdlib.h>         //были отгаданы

extern char word[];
void asteriks(char cens[], char guess, int life)
{
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
