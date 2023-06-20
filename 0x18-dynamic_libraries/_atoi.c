#include "main.h"

int _atoi(char *s)
{
    int sgn = 1;
    int i = 0;
    int res = 0;

    if (s[0] == '-')
    {
        sgn = -1;
        i++;
    }

    while (s[i] != '\0')
    {
        res = res * 10 + (s[i] - '0');
        i++;
    }

    return sgn * res;
}
