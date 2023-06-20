#include "main.h"

char *_strcat(char *dest, char *src)
{
    int j = 0;
    int dest_len = _strlen(dest);

    while (src[j] != '\0')
    {
        dest[dest_len + j] = src[j];
        j++;
    }

    dest[dest_len + j] = '\0';
    return dest;
}
