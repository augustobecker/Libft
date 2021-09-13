/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:15:07 by acesar-l          #+#    #+#             */
/*   Updated: 2021/09/07 17:04:22 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *s, int argument, size_t length)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (length > 0)
	{
		length--;
		str[i] = (unsigned char) argument;
	}
	return (s);
}
