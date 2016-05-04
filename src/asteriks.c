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
    int len;
    if (wcslen(word) % 2 == 1)
        len = wcslen(word) * 2 - 1;
    else
        len = wcslen(word) * 2;
    for (i = 0; i < len; i++) {
        cens[i] = '*';
    }
    cens[i+1] = '\0';
}
