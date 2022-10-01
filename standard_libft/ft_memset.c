/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:15:07 by acesar-l          #+#    #+#             */
/*   Updated: 2022/10/01 15:28:46 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int argument, size_t length)
{
	size_t		i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < length)
	{
		str[i] = (unsigned char) argument;
		i++;
	}
	return (s);
}
