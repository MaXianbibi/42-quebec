void ft_bzero(void *s, unsigned long n)
{
    char *csrc;

    csrc = s;
    while (n-- > 0)
        *csrc++ = '0';
}


