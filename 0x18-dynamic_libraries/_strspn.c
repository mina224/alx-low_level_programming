#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int j, i;
    int found;

    for (j = 0; s[j] != '\0'; j++)
    {
        found = 0;
        for (i = 0; accept[i] != '\0'; i++)
        {
            if (s[j] == accept[i])
            {
                count++;
                found = 1;
                break;
            }
        }
        if (found == 0)
            break;
    }

    return count;
}
