#include "libft.h"
char	*ft_strnstr(char *str, char *to_find, size_t size)
{
	int	i;
	int	find;

	i = 0;
	find = 0;
	if (to_find == NULL)
		return (str);
	while (str[i] && size - find)
	{
		while (str[i + find] == to_find[find] && size - find)
		{
			if (to_find[find + 1] == '\0')
				return (str + i);
			find++;
		}
		i++;
		size--;
	}
	return (NULL);
}
