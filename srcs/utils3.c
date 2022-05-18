/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:10:30 by jlaurent          #+#    #+#             */
/*   Updated: 2022/05/16 19:26:32 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	sortnorm2(t_data *data)
{
	if (checklowpos(data, bigb(data)) == 2)
		rb(data, 1);
	if (checklowpos(data, bigb(data)) == 1)
		rrb(data);
}

int	choseq(t_data *data)
{
	if (data->ch == 1)
		return (data->q2);
	if (data->ch == 2)
		return (data->q3);
	if (data->ch == 3)
		return (data->q4);
	if (data->ch == 4)
		return (data->q5);
	if (data->ch == 5)
		return (data->q6);
	if (data->ch == 6)
		return (data->q7);
	if (data->ch == 7)
		return (data->q8);
	if (data->ch == 8)
		return (data->q9);
	if (data->ch == 9)
		return (data->q10);
	if (data->ch == 10)
		return (data->q11);
	if (data->ch == 11)
		return (data->q12);
	if (data->ch == 12)
		return (data->q12);
	return (0);
}

void	assignq(t_data *data, int q)
{
	if (data->ch == 1)
		data->q3 = q;
	if (data->ch == 2)
		data->q4 = q;
	if (data->ch == 3)
		data->q5 = q;
	if (data->ch == 4)
		data->q6 = q;
	if (data->ch == 5)
		data->q7 = q;
	if (data->ch == 6)
		data->q8 = q;
	if (data->ch == 7)
		data->q9 = q;
	if (data->ch == 8)
		data->q10 = q;
	if (data->ch == 9)
		data->q11 = q;
	if (data->ch == 10)
		data->q12 = q;
	if (data->ch == 11)
		data->q13 = q;
	if (data->ch == 12)
		data->q14 = q;
	data->ch++;
}

int	chosesort1(t_data *data)
{
	if (data->q == 7)
		return (data->q7);
	if (data->q == 6)
		return (data->q6);
	if (data->q == 5)
		return (data->q5);
	if (data->q == 4)
		return (data->q4);
	if (data->q == 3)
		return (data->q3);
	if (data->q == 2)
		return (data->q2);
	if (data->q == 1)
		return (data->q1);
	return (0);
}

int	chosesort2(t_data *data)
{
	if (data->q == 15)
		return (data->q15);
	if (data->q == 14)
		return (data->q14);
	if (data->q == 13)
		return (data->q13);
	if (data->q == 12)
		return (data->q12);
	if (data->q == 11)
		return (data->q11);
	if (data->q == 10)
		return (data->q10);
	if (data->q == 9)
		return (data->q9);
	if (data->q == 8)
		return (data->q8);
	return (0);
}
