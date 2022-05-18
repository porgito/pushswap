/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:41:09 by jlaurent          #+#    #+#             */
/*   Updated: 2022/05/18 16:17:14 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	sa(t_data *data)
{
	int	swap;

	if (data->nba > 0)
	{
		swap = data->taba[0];
		data->taba[0] = data->taba[1];
		data->taba[1] = swap;
	}
	ft_printf("sa\n");
	data->nbop++;
}

void	sb(t_data *data)
{
	int	swap;

	if (data->nbb > 0)
	{
		swap = data->tabb[0];
		data->tabb[0] = data->tabb[1];
		data->tabb[1] = swap;
	}
	ft_printf("sb\n");
	data->nbop++;
}

void	ss(t_data *data)
{
	sa(data);
	sb(data);
}
