#include "libft.h"
char *ft_strchr(const char *str, int argument)
{
	int  	i;
    char 	*s;

    i = 0;
	while (str[i])
	{
		if (str[i] == argument)
		{
		    s = (char *) &str[i];
			return (s);
		}
		i++;
	}
	return (NULL);
}
