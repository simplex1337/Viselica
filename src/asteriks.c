#include <stdio.h>          //функция, которая отображает
#include <string.h>         //слово, из букв, которые
#include <stdlib.h>         //были отгаданы
#include <wchar.h>

extern wchar_t word[];
void asteriks(char cens[], wchar_t guess)
{
    int i;
    char guess_chr;
    wcstombs(&guess_chr, &guess, 1);
    for (i = 0; i < wcslen(word) * 2; i++) {
        if (guess_chr == 'л') 
            cens[i] = 'л';
        else
            cens[i] = '*';
    }
    cens[i+1] = '\0';
}
