#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(len * sizeof(char));
	if (str == NULL)
	    return (NULL);
	while (i < len)
	{
	    str[i] = s[start + i];
	    i++;
	}
	str[len] = '\0';
	return (str);
	free (str);
}
