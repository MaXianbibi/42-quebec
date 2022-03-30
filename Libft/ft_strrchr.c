int ft_strlen(char *str);

char *ft_strrchr(const char *str, int c)
{
    int len_str; 
    
    len_str = (ft_strlen((char*)str) - 1);
    while (1)
    {
        if (str[len_str] == c)
            return ((char *)str + len_str);
        if (len_str == 0)
            return (0);
        len_str--;
    }
}
