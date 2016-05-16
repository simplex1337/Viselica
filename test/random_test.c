//реализована функция выбора рандомного слова из словаря по трем темам
#include "ctest.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void random_word(unsigned int choice);

CTEST(register, random_word)
{
    unsigned int *choice = NULL;
    char rez = random_word("test", &choice);
    ASSERT_STR("тест", choice);
    ASSERT_EQUAL(1, rez);
    free(out);
}
