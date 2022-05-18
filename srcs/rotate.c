/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:42:20 by jlaurent          #+#    #+#             */
/*   Updated: 2022/05/16 16:18:20 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	ra(t_data *data, int c)
{
	int	i;
	int	j;
	int	tmp;
	int	tmpi;

	i = data->nba;
	j = 0;
	tmp = data->taba[0];
	tmpi = i;
	while (i > 0)
	{
		data->taba[j] = data->taba[j + 1];
		j++;
		i--;
	}
	data->taba[tmpi] = tmp;
	if (c == 1)
	{
		data->nbop++;
		ft_printf("ra\n");
	}
}

void	rb(t_data *data, int c)
{
	int	i;
	int	j;
	int	tmp;
	int	tmpi;

	i = data->nbb;
	j = 0;
	tmp = data->tabb[0];
	tmpi = i;
	while (i > 0)
	{
		data->tabb[j] = data->tabb[j + 1];
		j++;
		i--;
	}
	data->tabb[tmpi] = tmp;
	if (c == 1)
	{
		data->nbop++;
		ft_printf("rb\n");
	}
}

void	rr(t_data *data)
{
	ra(data, 2);
	rb(data, 2);
	ft_printf("rr\n");
	data->nbop++;
}
