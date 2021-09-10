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
    int     begin;
    int     final;
    char    *str;

    begin = 0;
    final = ft_strlen(s1) - 1;
    str = (char *)calloc(ft_strlen(s1) + 1, sizeof(char));
    if (!str || !s1)
        return (NULL);
    while (ft_isunwanted(s1[begin], set))
        begin++;
    while (ft_isunwanted(s1[final], set))
        final--;
    ft_strlcpy(str, s1 + begin, final - begin + 1);
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

