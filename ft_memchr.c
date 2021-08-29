#include "libft.h"
void *ft_memchr(const void *str, int argument, size_t size)
{
	const char	*s;
	size_t		i;

	i = 0;
	s = (const char *)str;
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		if (*(s + i) == argument)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
