#include "pub.h"
int
fibonacci(
    int     a
)
{
    if (a <= 2)
        return a;

    return fibonacci(a - 1) + fibonacci(a - 2);
}

int
fibonacci2(
    int     a
)
{
    int     i, j, k, l;

    if (a <= 2)
        return a;

    i = 2;

    j = 1;
    k = 2;
    while (i < a)
    {
        l = j + k;
        j = k;
        k = l;
        i++;
    }

    return l;
}

void
problem2()
{
    int     i, j;
    int     fibonacci = 0;
    int     sum;

    i = 1;
    j = 2;

    sum = 2;
    while (fibonacci < 4000000)
    {
        fibonacci = i + j;

        if (fibonacci % 2 == 0)
            sum += fibonacci;

        i = j;
        j = fibonacci;
    }

    printf("Result = %d\n", sum);
}
