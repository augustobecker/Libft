#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
    int 	i;
    int 	search;
    int 	set_found;
    char 	*str;

    i = 0;
    set_found = 0;
    if (s1 == NULL)
        return (NULL);
    str = (char *)malloc(strlen(s1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    while (s1[i])
    {
      search = 0;
      while (s1[i + set_found + search] == set[search])
      {
        if (set[search + 1] == '\0')
          set_found += strlen(set);
        ++search;
      }
      str[i] = s1[i + set_found];
      ++i;
    }
  return (str);
  free (str);
}
