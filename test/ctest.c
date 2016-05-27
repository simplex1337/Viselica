#include "ctest.h"
#include "../src/vis.h"

char word[] = "Milk";

CTEST(total, txt_reading)
{    
    int  res = random_word(word, 1);
    int s = 40;
    ASSERT_DBL_NEAR(s, res);
}

