#include <stdio.h>
#include <stdlib.h>

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    int i;
    char *sc1;
    char *sc2;

    i = 0;
    sc1 = (char *)str1;
    sc2 = (char *)str2;
    while (sc1 && *sc1 == *sc2 && n-- > 0)
    {
        *sc1++;
        *sc2++;
    }
    if (n == 0)
        return (0);
    return (*sc1 - *sc2);
}
