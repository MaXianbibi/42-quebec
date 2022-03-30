int ft_strncmp ( const char * str1, const char * str2, unsigned long num )
{
    while (*str1 != '\0' && *str1 == *str2 && num-- > 0 )
    {
        *str1++;
        *str2++;
    }
    if (num == 0)
        return (0);
    return((unsigned char)*str1 - (unsigned char)*str2);
}


