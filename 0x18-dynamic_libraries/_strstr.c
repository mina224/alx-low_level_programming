#include "main.h"
#include <stddef.h>
char *_strstr(char *haystack, char *needle)
{
    int n, m;
    int needle_len = _strlen(needle);

    if (needle_len == 0)
        return haystack;

    for (n = 0; haystack[n] != '\0'; n++)
    {
        if (haystack[n] == needle[0])
        {
            for (m = 1; m < needle_len; m++)
            {
                if (haystack[n + m] != needle[m])
                    break;
            }

            if (m == needle_len)
                return &haystack[n];
        }
    }

    return NULL;
}
