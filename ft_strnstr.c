/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:37:24 by acesar-l          #+#    #+#             */
/*   Updated: 2021/09/07 17:09:25 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(char *str, char *to_find, size_t size)
{
	int	i;
	int	find;

	i = 0;
	find = 0;
	if (!to_find)
		return (str);
	while (str[i] && size - find)
	{
		while (str[i + find] == to_find[find] && size - find)
		{
			if (!to_find[find + 1])
				return (str + i);
			find++;
		}
		i++;
		size--;
	}
	return (0);
}
