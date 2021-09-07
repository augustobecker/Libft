/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:44:12 by acesar-l          #+#    #+#             */
/*   Updated: 2021/09/07 17:10:54 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		search;
	int		set_found;
	char	*str;

	i = 0;
	set_found = 0;
	if (!s1)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		search = 0;
		while (s1[i + set_found + search] == set[search])
		{
			if (!set[search + 1])
				set_found += ft_strlen(set);
			++search;
		}
		str[i] = s1[i + set_found];
		++i;
	}
	return (str);
}
