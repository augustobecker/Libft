#include "libft.h"
int	ft_strncmp(char *s1, char *s2, size_t size)
{
	int i;

	i = 0;
	if (size == 0)
		return (0);
	while (i < size && s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char )s1[i] - (unsigned char )s2[i]);
}
