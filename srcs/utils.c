/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: porg <porg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:45:21 by porg              #+#    #+#             */
/*   Updated: 2022/05/18 17:15:47 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

int	divider(t_data *data, int b)
{
	int	n;

	n = 0;
	if (data->nba > 4)
		n = 6;
	if (data->nba > 250)
		n = 13;
	if (b == 1)
		return (n - 1);
	if (n == 6)
		data->q = 6;
	if (n == 13)
		data->q = 12;
	return (n);
}

void	test(t_data *data)
{
	long	i;
	int		k;
	int		n;

	i = choseq(data);
	k = 0;
	n = -1;
	while (i < data->big)
	{
		while (k <= data->nba)
		{
			if (data->taba[k] == i)
				n++;
			if (n == data->mid)
			{
				assignq(data, data->taba[k]);
				n++;
			}
			k++;
		}
		k = 0;
		i++;
	}
	while (data->ch < divider(data, 1))
		test(data);
}

void	parse2(t_data *data, int i)
{
	int	k;

	k = 0;
	while (k <= data->nba)
	{
		if (data->taba[k] == i)
			data->n++;
		if (data->n == (data->nba + 1) / divider(data, 2))
		{
			data->q2 = data->taba[k];
			data->mid = data->n;
			break ;
		}
		k++;
	}
}

void	parse(t_data *data)
{
	long	i;

	i = data->low;
	data->n = 0;
	data->q1 = i;
	while (i < data->big)
	{
		parse2(data, i);
		if (data->q2)
			break ;
		i++;
	}
	data->ch = 1;
	test(data);
}

long	thegoodone(t_data *data, long base)
{
	long	i;
	int		j;

	i = base;
	while (i >= lowb(data))
	{
		j = 0;
		while (j <= data->nbb)
		{
			if (data->tabb[j] == i)
				return (i);
			j++;
		}
		i--;
	}
	return (0);
}
