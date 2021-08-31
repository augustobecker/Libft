#include "libft.h"
static int ft_nblength(int nb);

static char *ft_rev_str(char *str);

char *ft_itoa(int nb)
{
    int     i;
    int     sign;
    char    *str;

    i = 0;
    sign = 0;
    str = (char *)malloc((ft_nblength(nb) + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    if (nb == 0)
        return (str = "0\0");
    if (nb < 0)
    {
		if (nb == -2147483648)
    		return (str = "-2147483648\0");
        nb *= --sign;
    }
    while (nb)
	{
        str[i++] = (nb % 10) + '0';
        nb/= 10;
	}
    if (sign)
        str[i++] = '-';
    str[i] = '\0';
    return (ft_rev_str(str));
}

static int ft_nblength(int nb)
{
    int length;

    length = 0;
    if (nb <= 0)
        length++;
    while (nb)
	{
		nb /= 10;
		length++;
	}
	return (length);
}

static char *ft_rev_str(char *str)
{
    int    i;
    int    last;

    i = 0;
    last = ft_strlen(str) - 1;
    while (i < last - i)
    {
        str[i]        = str[i] ^ str[last - i];
        str[last - i] = str[i] ^ str[last - i];
        str[i]        = str[i] ^ str[last - i];
        i++;
    }
    return (str);
}
