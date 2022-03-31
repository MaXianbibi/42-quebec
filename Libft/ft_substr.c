#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str);

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    int i;
    int size;

    size = ((ft_strlen((char*)s + start) + 1) < len) ? (ft_strlen((char*)s + start) + 1) : len;
    start = (0 == start) ? start : start - 1;
    i = 0;
    substr = (char*)malloc(sizeof(char) * size + 1);
    if (!substr)
        return(NULL);
    while (s[i] != '\0' && i < len)
    {
        substr[i] = s[i + start];
        i++;
    }
    substr[i] = '\0';
    return(substr);
}

// pt que la 12 est innutile puisque lorsque tu met un '\0' sa anule anyways . . .