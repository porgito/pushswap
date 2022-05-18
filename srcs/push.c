/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:28:09 by jlaurent          #+#    #+#             */
/*   Updated: 2022/05/18 16:36:39 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	pbdecalage(t_data *data)
{
	int	i;

	i = data->nbb;
	while (i >= 0)
	{
		data->tabb[i + 1] = data->tabb[i];
		data->tabb[i] = 0;
		i--;
	}
	data->tabb[0] = 0;
}

void	pb(t_data *data)
{
	int	arg;
	int	i;
	int	j;

	arg = data->list;
	i = 0;
	j = 1;
	if (data->nba != -1)
	{
		if (data->nbb != -1)
		{
			pbdecalage(data);
		}
		data->tabb[0] = data->taba[0];
		while (arg > 0)
		{
			data->taba[i] = data->taba[j];
			i++;
			j++;
			arg--;
		}
		data->taba[data->list] = 0;
	}
	count(data, 1);
	ft_printf("pb\n");
}

void	padecalage(t_data *data)
{
	int	i;

	i = data->nba;
	while (i >= 0)
	{
		data->taba[i + 1] = data->taba[i];
		data->taba[i] = 0;
		i--;
	}
	data->taba[0] = 0;
}

void	pa(t_data *data)
{
	int	arg;
	int	i;
	int	j;

	arg = data->list;
	i = 0;
	j = 1;
	if (data->nbb != -1)
	{
		if (data->nba != -1)
		{
			padecalage(data);
		}
		data->taba[0] = data->tabb[0];
		while (arg > 0)
		{
			data->tabb[i] = data->tabb[j];
			i++;
			j++;
			arg--;
		}
		data->tabb[data->list] = 0;
	}
	count(data, 2);
	ft_printf("pa\n");
}
