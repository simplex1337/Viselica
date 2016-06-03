#include "ctest.h"
#include "../src/vis.h"

CTEST(random, txt_opening) //открывается ли файл
{    
    char word[2];
    int  res = random_word(word, 1);
    int s = 40;
    ASSERT_EQUAL(s, res);
}

CTEST(random, txt_reading) //читается ли файл
{    
    char word[20];
    random_word(word, 1);
    ASSERT_NOT_EQUAL(word[0], 0);
}

CTEST(check, sym_was) //ставится ли флаг, что символ был
{
    char alph[25];
    alph[0] = 'a';
    char symbol='a';
    int res = check(symbol, alph);
    int s = 1;
    ASSERT_EQUAL(s, res);
}

CTEST(check, sym_wasnt) //ставится ли флаг, если символа не было
{
    char alph[25];
    alph[0] = 'b';
    char symbol='a';
    int res = check(symbol, alph);
    int s = 0;
    ASSERT_EQUAL(s, res);
}

CTEST(check, big_sym) //ставится ли флаг, если символ большой
{
    char alph[25];
    alph[0] = 'a';
    char symbol='A';
    int res = check(symbol, alph);
    int s = 1;
    ASSERT_EQUAL(s, res);
}

CTEST(check, isnt_sym) //ставится ли флаг, если введен НЕ символ
{
    char alph[2];
    char symbol='1';
    int res = check(symbol, alph);
    int s = 1;
    ASSERT_EQUAL(s, res);
}

CTEST(asteriks, repeat) //отнимаются ли жизни, когда введен
{                         //повторный символ или не символ
    char word[2];
    char cens[2]; 
    char guess;
    int life = 228;
    int donth = 1;
    int res = asteriks(word, cens, guess, life, donth);
    int s = 228;
    ASSERT_EQUAL(s, res);
}

CTEST(asteriks, right_sym) //отнимаются ли жизни, когда введен
{                         //правильный символ
    char word[5] = "lolk";
    char cens[5] = "*o**"; 
    char guess = 'l';
    int life = 228;
    int donth = 0;
    int res = asteriks(word, cens, guess, life, donth);
    int s = 228;
    ASSERT_EQUAL(s, res);
}

CTEST(asteriks, bad_sym) //отнимаются ли жизни, когда введен
{                         //неправильный символ
    char word[5] = "lolk";
    char cens[5] = "*o**"; 
    char guess = 'a';
    int life = 228;
    int donth = 0;
    int res = asteriks(word, cens, guess, life, donth);
    int s = 227;
    ASSERT_EQUAL(s, res);
}

CTEST(asteriks, big_sym) //отнимаются ли жизни, когда введен
{                         //большой символ
    char word[5] = "lolk";
    char cens[5] = "*o**"; 
    char guess = 'L';
    int life = 228;
    int donth = 0;
    int res = asteriks(word, cens, guess, life, donth);
    int s = 228;
    ASSERT_EQUAL(s, res);
}


