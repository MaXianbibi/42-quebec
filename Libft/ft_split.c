#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

int word_index(char const *s, int word_index, char c)
{
    int index;
    int i;

    i = 0;
    index = 0;
    while (s[i] != '\0')
    {
        if (index == word_index)
            return(i);
        while (s[i] != c && s[i] != '\0')
            i++;
        while (s[i] == c)
            i++;
        index++;
    }
    return(0);
}

int word_len(char const *s, int word_index, char c)
{
    int index;
    int len;
    int i;

    i = 0;
    len = 0;
    index = 0;
    while (s[i] != '\0')
    {
        while (s[i] != c && s[i] != '\0')
        {
            len++;
            i++;
        }
        if (index == word_index)
            return(len);
        while (s[i] == c)
            i++;
        len = 0;
        index++;
    }
    return(0);
}

char **ft_split(char const *s, char c)
{
    int i;
    char **str;
    int word;

    if(!s)
        return (NULL);
    word = 1;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            if (s[i + 1] != c && s[i + 1] != '\0')
                word++;
        }
        i++;
    }
    str = malloc(sizeof(char) * word);
    if (!str)
        return(NULL);
    i = 0;
    while (i < word)
    {
        str[i] = ft_substr(s, word_index(s,i,c) + 1, word_len(s,i,c));
        if (!str[i])
            return (NULL);
        i++;
    }

    for (int x = 0; x < word; x++)
        printf("%s ", str[x]);
    return (str);
}