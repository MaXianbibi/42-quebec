char *ft_strchr(const char *str, int c)
{
    while (1)
    {
        if (*str == c)
            return ((char *)str);
        if (*str == '\0')
            return (0);
        str++;
    }
}