#include "ctest.h"
#include "../src/vis.h"

char word[] = "Milk";

CTEST(total, txt_reading)
{    
    int  res = random_word(word, 1);
    int s = 40;
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, word_censoring_part1) 
{
    int res = asteriks("Milk", "****", 'i', 12);
    int s = 12;
    ASSERT_DBL_NEAR(s, res);
}

CTEST(total, word_censoring_part2) 
{
    int res = asteriks(word, "****", 'o', 12);
    int s = 12;
    ASSERT_DBL_NEAR(s, res);
}
