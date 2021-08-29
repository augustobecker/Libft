#include "libft.h"
void *ft_memset(void *s, int argument, size_t length)
{
    char      *str;
    size_t    i;

    str = (char *)s;
    while ( i < length)
    {
        str[i]= argument;
        i++;
    }
    return (s);
}
