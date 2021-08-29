#include "libft.h"
char *ft_strjoin(const char *s1, const char *s2)
{
    size_t    i;
    size_t    i_s2;
    char      *str;

    i = 0;
    i_s2 = 0;
    str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
    if (str == NULL)
        return (NULL);
    while (i < ft_strlen(s1))
    {
        str[i] = s1[i];
        i++;
    }
    while (i < ft_strlen(s1) + ft_strlen(s2))
        str[i++] = s2[i_s2++];
    return (str);
    free (str);
}
