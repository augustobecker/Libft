#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t length)
{
    size_t      i;
    char        *dest_str;
    char        *temp_str;

    i = 0;
    dest_str = (char *) dest;
    temp_str = (char *) malloc(length * sizeof(char));
    ft_memcpy(temp_str, src, length);
    ft_memcpy(dest_str, temp_str, length);
    return (dest);
    free (temp_str);
}
