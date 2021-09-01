#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int 	i;
	char 			*str;

	i = 0;
	str = (char *)ft_calloc(strlen(s) + 1 * sizeof(char));
	if (str == NULL)
	    return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
