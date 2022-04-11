#include "libft.h"

char ok(int n)
{
    while (n > 9)
    {
        n /= 10;
    }
    
    return (n);
}

int nop(int size, int last)
{
    while (size-- > 1)
    {
        last *= 10;
    }
    return (last);
}

char *ft_itoa(int n)
{
    int i;
    char *str;
    int size;
    int isPositive;
    int cpy;

    isPositive = 0;
    i = 0;
    size = 1;
    if (n < 0)
    {
        n *= -1;
        isPositive++;
        size++;
    }
    cpy = n;
    while (n > 0)
    {
        n /= 10;
        size++;
    }
    str = malloc(sizeof(char) * size + 1);
    if (isPositive)
    {
        str[i] = '-';
        i++;
        size--;
    }
    while (size-- > 1)
    {
        str[i] = ok(cpy) + 48;
        cpy -= nop(size, ok(cpy));

        i++;
    }
    str[i] = '\0';
    return (str);
}