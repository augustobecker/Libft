/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:23:00 by acesar-l          #+#    #+#             */
/*   Updated: 2021/09/07 16:23:04 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int argument)
{
	int		i;
	char	*s;

	i = 0;
	while (str[i])
	{
		if (str[i] == argument)
		{
			s = (char *) &str[i];
			return (s);
		}
		i++;
	}
	return (0);
}
