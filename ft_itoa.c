#include "libft.h"
static void    ft_rev_str(char *str)
{
    int    i;
    int    size;
    int    temporary;

    i = 0;
    size = ft_strlen(str) - 1;
    while (i < size)
    {
        temporary = *(str + i);
        *(str + i) = *(str + size);
        *(str + size) = temporary;
        i++;
        size--;
    }
}
char *ft_itoa(int nb)
{
    int     i;
    char    *str;
    int     sign;

    i = 0;
    sign = 0;
    str = ft_calloc(13, sizeof(char));
    if (nb < 0)
    {
        if (nb == -2147483648)
        {
          str = "-2147483648\0";
          return (str);
        }
        nb *= --sign;
    }
    while (nb)
    {
        str[i++] = (nb % 10) + '0';
        nb /= 10;
    }
    if (sign)
        str[i++] = '-';
    str[i] = '\0';
    ft_rev_str(str);
    return (str);
}
