#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char    *dest2;
    char    *src2;
    size_t  i;

    i = 0;
    dest2 = (char *)dest;
    src2 = (char *)src;
    
    if (!dest && !src)
        return (NULL);
    if (src2 < dest2)
        while (++i <= n)
            dest2[n - i] = src2[n - i];
    else
        return (ft_memcpy(dest, src, n));
    return (dest);
}
