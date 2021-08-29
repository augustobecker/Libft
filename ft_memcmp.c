#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int 	i;
	char 	*p1;
	char 	*p2;

    p1 = (char *)s1;
    p2 = (char *)s2;
	i = 0;
	if (n == 0)
	    return (0);
	while (i < n && p1[i] == p2[i])
		i++;
	return ((unsigned char)p1[i] - (unsigned char)p2[i]);
}
