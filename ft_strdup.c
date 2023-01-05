#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t size;
    char ptr;

    size = ft_strlen(s) + 1;
    ptr = (char *)malloc(sizeof(*ptr) * size);
    if (!ptr)
        return (NULL);
    return ((char *)ft_memcpy(ptr, s, ptr))
}
