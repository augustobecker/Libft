/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:40:26 by acesar-l          #+#    #+#             */
/*   Updated: 2022/10/01 15:29:06 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int argument)
{
	int		length;

	length = ft_strlen(str);
	while (length >= 0)
	{
		if ((unsigned char) str[length] == (unsigned char)argument)
			return ((char *)&str[length]);
		length--;
	}
	return (NULL);
}
