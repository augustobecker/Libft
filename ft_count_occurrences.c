/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_occurrences.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:18:18 by acesar-l          #+#    #+#             */
/*   Updated: 2022/03/09 16:18:51 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_occurrences(char **str, char c, int array_len)
{
	int	occurrences;
	int	i;
	int	nbr_str;

	i = 0;
	nbr_str = 0;
	occurrences = 0;
	while (nbr_str <= array_len)
	{
		while (str[nbr_str][i])
		{
			if (str[nbr_str][i] == c)
				occurrences++;
			i++;
		}
		nbr_str++;
	}
	return (occurrences);
}
