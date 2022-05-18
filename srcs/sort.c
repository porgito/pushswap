/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: porg <porg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:54:12 by porg              #+#    #+#             */
/*   Updated: 2022/05/18 17:16:53 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	suite(t_data *data)
{
	int		pos;
	long	big;

	pos = checklowpos(data, bigb(data));
	big = bigb(data);
	if (pos == 1)
	{
		while (data->tabb[0] != big)
			rrb(data);
		pa(data);
	}
	if (pos == 2)
	{
		while (data->tabb[0] != big)
			rb(data, 1);
		pa(data);
	}
	if (data->nbb != -1)
		suite(data);
}

int	chosesort(t_data *data)
{
	int	i;
	int	j;

	i = chosesort1(data);
	j = chosesort2(data);
	if (i == 0)
		return (j);
	if (j == 0)
		return (i);
	return (0);
}
/*
void	sort(t_data *data)
{
	int	i;

	i = 0;
	while (i <= data->nba)
	{
		while (data->taba[0] >= chosesort(data))
		{
			if (data->taba[0] > bigb(data))
			{
				while (data->tabb[0] != lowb(data))
				{
					if (checklowpos(data, lowb(data)) == 2)
						rb(data);
					if (checklowpos(data, lowb(data)) == 1)
						rrb(data);
				}
			}
			else
			{
				while (data->tabb[0] != whatisthegoodone(data, data->taba[0]))
				{
					if (checklowpos(data, whatisthegoodone(data, data->taba[0])) == 2)
						rb(data);
					if (checklowpos(data, whatisthegoodone(data, data->taba[0])) == 1)
						rrb(data);
				}
			}
			pb(data);
		}
		ra(data);
		i++;
	}
	data->q--;
//	if (data->nba != -1)
//		sort(data);
//	if (data->nba == -1)
//		suite(data);
}
*/

void	hard(t_data *data)
{
	int		i;
	long	k;

	i = 0;
	k = '\0';
	while (k == '\0')
	{
		if (data->taba[i] >= chosesort(data))
			k = data->taba[i];
		i++;
	}
	if (checklowpos(data, thegoodone(data, k)) == 2)
	{
		while (data->taba[0] != k && data->tabb[0] != thegoodone(data, k))
			rr(data);
	}
	if (k > bigb(data) || k < lowb(data))
	{
		if (checklowpos(data, bigb(data)) == 2)
		{
			while (data->taba[0] != k && data->tabb[0] != bigb(data))
				rr(data);
		}
	}
}

void	sortnorm(t_data *data, int i)
{
	if (i == 1)
	{
		while (data->tabb[0] != thegoodone(data, data->taba[0]))
		{
			if (checklowpos(data, thegoodone(data, data->taba[0])) == 2)
				rb(data, 1);
			if (checklowpos(data, thegoodone(data, data->taba[0])) == 1)
				rrb(data);
		}
	}
	if (i == 2)
	{
		pb(data);
		hard(data);
	}
	if (i == 3)
	{
		data->q--;
		if (data->nba != -1)
			sort(data);
		if (data->nba == -1)
			suite(data);
	}
}

void	sort(t_data *data)
{
	int	i;

	i = 0;
	while (i <= data->nba)
	{
		hard(data);
		while (data->taba[0] >= chosesort(data) && data->nba != -1)
		{
			if (data->taba[0] > bigb(data) || data->taba[0] < lowb(data))
			{
				while (data->tabb[0] != bigb(data))
					sortnorm2(data);
			}
			else
				sortnorm(data, 1);
			sortnorm(data, 2);
		}
		ra(data, 1);
		i++;
	}
	sortnorm(data, 3);
}
