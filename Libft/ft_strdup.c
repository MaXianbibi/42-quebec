#include <stdlib.h>
int ft_strlen(char *str);


char *ft_strdup(const char *s)
{
    char *cs;
    int i;

    i = 0;
    cs = (char*)malloc(sizeof(char) * ft_strlen((char*)s) + 1);
    if (!cs)
        return (NULL);
    while (s[i] != '\0')
    {
        cs[i] = s[i];
        i++;
    }
    cs[i] = '\0';
    return (cs);
}
