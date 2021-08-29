#include "libft.h"
void ft_bzero(void *s, size_t length)
{
    size_t i;

    i = 0;
    while (i < length)
    {
        ((char *)s)[i] = '\0';
        i++;
    }
}
