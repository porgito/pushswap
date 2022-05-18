/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:30:03 by jlaurent          #+#    #+#             */
/*   Updated: 2022/05/18 17:07:08 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	count(t_data *data, int opt)
{
	if (opt == 1)
	{
		data->nbb++;
		data->nba--;
	}
	if (opt == 2)
	{
		data->nba++;
		data->nbb--;
	}
}

void	findlow(t_data *data)
{
	int	i;

	i = 0;
	data->low = data->taba[0];
	while (i <= data->nba)
	{
		if (data->taba[i] < data->low)
			data->low = data->taba[i];
		i++;
	}
	i = 0;
	data->big = data->taba[0];
	while (i <= data->nba)
	{
		if (data->taba[i] > data->big)
			data->big = data->taba[i];
		i++;
	}
}

int	checklowpos(t_data *data, long big)
{
	int	i;

	i = 0;
	while (data->tabb[i] != big)
		i++;
	if (i > data->nbb / 2)
		return (1);
	else
		return (2);
}

//2 ra et 1 rra

long	bigb(t_data *data)
{
	long	big;
	int		i;

	i = 0;
	big = data->tabb[0];
	while (i <= data->nbb)
	{
		if (data->tabb[i] > big)
			big = data->tabb[i];
		i++;
	}
	return (big);
}

long	lowb(t_data *data)
{
	long	low;
	int		i;

	i = 0;
	low = data->tabb[0];
	while (i <= data->nbb)
	{
		if (data->tabb[i] < low)
			low = data->tabb[i];
		i++;
	}
	return (low);
}
