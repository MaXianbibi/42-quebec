int ft_strlcpy(char *dst, const char *src, unsigned long n)
{
    int srclen;
    int i;
 
    if (!dst || !src)
        return (0);
    srclen = 0;
    while(src[srclen] != 0)
        srclen++;
    i = 0;
    if (n != 0)
    {
        while (src[i] != '\0' && i < (n - 1))
        {
            dst[i] = src[i];
    	    i++;
        }
    
    }
    return (srclen);
}

