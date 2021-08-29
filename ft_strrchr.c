#include "libft.h"
char *ft_strrchr(const char *str, int argument)
{
	int 	length;
	char 	*s;

	length = strlen(str);
	while (length)
	{
		if (*(str + length) == argument)
		{
		    s = (char *)&str[length];
			return (s);
		}
		length--;
	}
	return (NULL);
}


