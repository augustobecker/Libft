/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:44:12 by acesar-l          #+#    #+#             */
/*   Updated: 2021/09/10 01:58:54 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int ft_isunwanted(char c, char const *unwanted);

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t     start;
    size_t     final;
    char    *str;
    
	if (!s1 || !set)
		return (NULL);
    start = 0;
    final = ft_strlen(s1) - 1;
    while (ft_isunwanted(s1[start], set) && s1[start])
        start++;
    while (ft_isunwanted(s1[final], set) && final > 0)
        final--;
    if (final < start)
	{
		str = ft_calloc(1, 1);
		return (str);
	}
    str = ft_substr(s1, start, final - start + 1);
    if (!str)
        return (NULL);
    return (str);
}

static int ft_isunwanted(char c, char const *unwanted)
{
    int	i;

    i = 0;
    while (unwanted[i])
    {
        if (unwanted[i] == c)
            return (1);
        i++;
    }
    return (0);
}
