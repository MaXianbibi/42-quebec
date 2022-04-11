#include "libft.h"

int ft_strlen(char *str);

int ft_strlcat(char *dst, const char *src, unsigned long n)
{
    int dst_len;
    int src_len;
    int i;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen((char*)src);
    i = 0;
    while (src[i] != '\0')
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
}

