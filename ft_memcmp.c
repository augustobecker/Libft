/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:09:45 by acesar-l          #+#    #+#             */
/*   Updated: 2021/09/07 16:09:47 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*p1;
	char	*p2;

	i = 0;
	p1 = (char *)s1;
	p2 = (char *)s2;
	if (n == 0)
		return (0);
	while (i < n && p1[i] == p2[i])
		i++;
	return ((unsigned char)p1[i] - (unsigned char)p2[i]);
}
