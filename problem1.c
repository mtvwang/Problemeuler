#include "pub.h"

void
problem1()
{
    int     i;
    int     sum = 0;

    for (i = 3; i < 1000; i = i + 3)
    {
        sum += i;
    }

    for (i = 5; i < 1000; i = i + 5)
    {
        sum += i;
    }

    for (i = 15; i < 1000; i = i + 15)
    {
        sum -= i;
    }

    printf("Result = %d \n", sum);
}
