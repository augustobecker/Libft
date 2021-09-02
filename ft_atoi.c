#include "libft.h"
static int ft_isspace(char a)
{
	return ((a == '\n') 
	    || (a == '\v') 
	    || (a == '\f') 
	    || (a == '\t') 
	    || (a == '\r') 
	    ||  (a == ' '));
}

int ft_atoi(const char *str)
{
	int nbr;
	int sign;

	nbr = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
        str++;
	}
	while (ft_isdigit(*str))
	{
		nbr = (*str - 48) + nbr * 10;
		str++;
	}
	return (nbr * sign);
}
