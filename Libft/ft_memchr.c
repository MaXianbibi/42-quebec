#include <stdlib.h>
#include <stdio.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    char *cpy;
    int i;

    i = 0;
    cpy = (char *)str;
    while (cpy || i < n)
    {
        if (*cpy++ == c)
            return(--cpy);
        i++;
    }
    return (NULL);
}
