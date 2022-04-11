#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

int nbwords(char *s, char c)
{
    int words;

    words = 0;
    while (*s++)
    {
        if (*s != c && *s != '\0')
        {
            words++;
            while (*s != c && *s != '\0')
                *s++;
        }
    }
    return (words);
}

int lenghtofword(char *s, char c, unsigned int i, int *index)
{
    int words;
    int len;
    int test;

    test = 0;
    words = 0;
    len = 0;
    while (*s)
    {
        if (*s + 1 != c && *s + 1 != '\0')
        {
            if (i == words)
            { 
                while (*s != c && *s != '\0')
                {

                    len++;
                    *s++;
                }
                return (len);
            }
            words++;
            while (*s != c && *s != '\0')
            {
                test++;
                *index = test;
                *s++;
            }
        }
        test++;
        *index = test;
        *s++;
    }

    return (0);
}

int ft_split(char const *s, char c)
{
    int i;
    int word;
    char *cpy;
    int wordlen;
    char **final;
    int index;
    
    index = 0;
    cpy = (char *)s;
    word = nbwords(cpy, c);
    final = malloc(sizeof(final) * word + 1);
    i = 0;
    if (!final)
        return (NULL);

    while (i < word)
    {
        printf("%d : %d a la position :", i + 1, lenghtofword(cpy, c, i, &index));
        printf("%d \n", index);
        i++;
        //final[i] = malloc(sizeof(final) * lenghtofword(s, c, i) + 1);
        //final[i] = ft_substr(s, )
        //final[i][lenghtofword(s, c, i) + 1] = '\0';
    }
    return (word);
}

int main()
{
    char a[] = "bonjour a toi :)";
    printf("%d", ft_split(a, ' '));

}
