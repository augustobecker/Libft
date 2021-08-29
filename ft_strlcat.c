#include "libft.h"
size_t ft_strlcat(char * dest, const char * src, size_t dest_size)
{
	size_t	i;
    size_t  src_i;

	i = 0;
	src_i = strlen(dest);
	while (i < dest_size && src[i])
		dest[src_i++] = src[i++];
	dest[dest_size] = 0;
	return (strlen(dest));
}
