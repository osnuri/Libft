#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str

    str = (unsigned char *)s;
    c = (unsigned char)c;
    while (n && *str != c)
    {
        ++ptr;
        --n;
    }
    if (n)
        return ((void *)ptr);
    else
        return (NULL);
}