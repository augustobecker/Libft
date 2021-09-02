#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t length)
{
    size_t          i;
    char *          dest_ptr;
    const char *    src_ptr;

    i = length - 1;
    dest_ptr = (char *) dest;
    src_ptr = (const char *) src;
    if (dest > src)
    {
        while (i)
        {
            dest_ptr[i] = src_ptr[i];
            i--;
        }
    }
    else
        ft_memcpy(dest, src, length);
    return (dest);
}
