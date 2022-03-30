int ft_atoi(const char *str)
{
    int i;
    int signe;
    int res;

    res = 0;
    signe = 1;
    i = 0;
    while ((str[i] > 8 && 14 > str[i]) || str[i] == 32)
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            signe *= -1;
        i++;
    }
    while(str[i] > 47 && 58 > str[i])
    {
        res = res * 10 + str[i] - 48;
        i++;
    }
    return (res*signe); 
}