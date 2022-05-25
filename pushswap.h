/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:46:02 by jlaurent          #+#    #+#             */
/*   Updated: 2022/05/25 23:06:39 by porg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "./ft_printf/ft_printf.h"

typedef struct s_data{
	long	*taba;
	long	*tabb;
	int		list;
	long	low;
	long	big;
	int		nba;
	int		nbb;
	int		nbarg;
	int		nbop;
	int		mid;
	int		q1;
	long	q2;
	int		q3;
	int		q4;
	int		q5;
	int		q6;
	int		q7;
	int		q8;
	int		q9;
	int		q10;
	int		q11;
	int		q12;
	int		q13;
	int		q14;
	int		q15;
	int		n;
	int		q;
	int		ch;

}			t_data;

void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	pa(t_data *data);
void	padecalage(t_data *data);
void	pb(t_data *data);
void	pbdecalage(t_data *data);
void	swap(t_data *data, char **argv, int argc);
void	ra(t_data *data, int c);
void	rb(t_data *data, int c);
void	rr(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);
void	count(t_data *data, int opt);
void	findlow(t_data *data);
void	parse(t_data *data);
void	sort(t_data *data);
void	sort2(t_data *data);
void	sort3(t_data *data);
long	bigb(t_data *data);
long	lowb(t_data *data);
int		chosesort(t_data *data);
int		checklowpos(t_data *data, long big);
long	thegoodone(t_data *data, long base);
void	sortnorm2(t_data *data);
void	assignq(t_data *data, int q);
int		choseq(t_data *data);
int		chosesort(t_data *data);
int		chosesort1(t_data *data);
int		chosesort2(t_data *data);
void	pushlast(t_data *data);
int		check(t_data *data);
int		checkdup(t_data *data);
void	checkdup1(t_data *data);
void	checkarg(int argc, char ** argv);
void	checkarg2(char *argv);
void	initvar(t_data *data, int argc);
void	split(t_data *data, char *argv);
void	freeall(t_data *data);

#endif
