#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{

    void *r = malloc(nitems*size);
    if (!r)
        return(r);

    ft_memset(r, 0, nitems*size);
    return (r);
}