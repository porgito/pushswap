/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: porg <porg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 06:47:23 by porg              #+#    #+#             */
/*   Updated: 2022/05/17 16:44:53 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

int	check(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (data->taba[i] < data->taba[j] && i < data->nba)
	{
		i++;
		j++;
	}
	if (i == data->nba)
		return (1);
	return (0);
}

int	biglow(t_data *data, int c)
{
	int	big;
	int	i;
	int	low;

	i = 0;
	big = data->taba[0];
	while (i <= data->nba)
	{
		if (data->taba[i] > big)
			big = data->taba[i];
		i++;
	}
	if (c == 2)
		return (big);
	i = 0;
	low = data->taba[0];
	while (i <= data->nba)
	{
		if (data->taba[i] < low)
			low = data->taba[i];
		i++;
	}
	if (c == 1)
		return (low);
	return (0);
}

int	good(t_data *data, int base)
{
	int	i;
	int	j;

	i = 0;
	i = base;
	while (i <= biglow(data, 2))
	{
		j = 0;
		while (j <= data->nba)
		{
			if (data->taba[j] == i)
				return (i);
			j++;
		}
		i++;
	}
	return (0);
}

void	sort2(t_data *data)
{
	pb(data);
	pb(data);
	sort3(data);
	while (data->nbb != -1)
	{
		if (data->tabb[0] > biglow(data, 2) || data->tabb[0] < biglow(data, 1))
		{
			while (data->taba[0] != biglow(data, 1))
				ra(data, 1);
		}
		else
		{
			while (data->taba[0] != good(data, data->tabb[0]))
				ra(data, 1);
		}
		pa(data);
	}
	while (data->taba[0] != biglow(data, 1))
		ra(data, 1);
}

void	sort3(t_data *data)
{
	int	t;

	t = check(data);
	if (data->taba[0] > data->taba[1] && data->taba[0] < data->taba[2])
		sa(data);
	if (data->taba[1] > data->taba[2] && data->taba[0] < data->taba[2])
		rra(data);
	if (data->taba[0] < data->taba[1] && data->taba[0] > data->taba[2])
		rra(data);
	if (data->taba[0] > data->taba[1] && data->taba[1] > data->taba[2])
		ra(data, 1);
	if (data->taba[0] > data->taba[2] && data->taba[1] < data->taba[2])
		ra(data, 1);
	if (t == 0)
		sort3(data);
}
