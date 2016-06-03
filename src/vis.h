#ifndef vis_h
#define vis_h

#include <time.h>
#include <stdio.h>              //главная функция
#include <stdlib.h>             //объединяет все подфункции
#include <curses.h>             //является так же графической оболочкой
#include <locale.h>
#include <string.h>
#define WORD_SIZE 20

void risunok(int life);
int random_word(char word[], unsigned int choice);
int asteriks(char word[], char cens[], char guess, int life, int donth);
void win();
void lose();
void hangman();
void jizi(int life, int hires);
void risunok(int life);
void risunok_hd(int life);
unsigned char input(int hires);
int check(char guess, char alph[]);
#endif
