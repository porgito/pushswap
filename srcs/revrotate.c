/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:08:30 by jlaurent          #+#    #+#             */
/*   Updated: 2022/05/16 16:17:53 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	rra(t_data *data)
{
	int	i;
	int	tmp;

	i = data->nba;
	tmp = data->taba[i];
	while (i > 0)
	{
		data->taba[i] = data->taba[i - 1];
		i--;
	}
	data->taba[0] = tmp;
	data->nbop++;
	ft_printf("rra\n");
}

void	rrb(t_data *data)
{
	int	i;
	int	tmp;

	i = data->nbb;
	tmp = data->tabb[i];
	while (i > 0)
	{
		data->tabb[i] = data->tabb[i - 1];
		i--;
	}
	data->tabb[0] = tmp;
	data->nbop++;
	ft_printf("rrb\n");
}

void	rrr(t_data *data)
{
	rra(data);
	rrb(data);
}
