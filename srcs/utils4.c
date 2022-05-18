/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:09:53 by jlaurent          #+#    #+#             */
/*   Updated: 2022/05/17 15:52:50 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

int	checkdup(t_data *data)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	while (i <= data->nba)
	{
		j = 0;
		n = 0;
		while (j <= data->nba)
		{
			if (data->taba[j] == data->taba[i])
				n++;
			if (n > 1)
				return (1);
			j++;
		}
		if (data->taba[i] > 2147483647)
			return (1);
		if (data->taba[i] < -2147483648)
			return (1);
		i++;
	}
	return (0);
}

void	checkdup1(t_data *data)
{
	int	i;

	i = checkdup(data);
	if (i == 1)
	{
		freeall(data);
		ft_printf("Error\n");
		exit (0);
	}
}
