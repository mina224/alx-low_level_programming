#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
    int j = 0;
    int dest_len = _strlen(dest);

    while (src[j] != '\0' && j < n)
    {
        dest[dest_len + j] = src[j];
        j++;
    }

    dest[dest_len + j] = '\0';
    return dest;
}
