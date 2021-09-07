/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:26:39 by acesar-l          #+#    #+#             */
/*   Updated: 2021/09/07 17:05:42 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	src_i;

	i = 0;
	src_i = ft_strlen(dest);
	while (i < dest_size && src[i])
		dest[src_i++] = src[i++];
	dest[dest_size] = 0;
	return (ft_strlen(dest));
}
