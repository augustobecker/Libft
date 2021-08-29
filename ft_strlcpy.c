#include "libft.h"
size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t cpy;

	i = 0;
	cpy = 0;
	if (size == 0)
		return (0);
	cpy = ft_strlen(src);
	while (size)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	dest[i] = '\0';
	return (cpy);
}
