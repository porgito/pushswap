/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:09:53 by jlaurent          #+#    #+#             */
/*   Updated: 2022/05/26 01:12:14 by porg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

int	checkdup(t_data *data)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	while (i <= data->nba)
	{
		j = 0;
		n = 0;
		while (j <= data->nba)
		{
			if (data->taba[j] == data->taba[i])
				n++;
			if (n > 1)
				return (1);
			j++;
		}
		if (data->taba[i] > 2147483647)
			return (1);
		if (data->taba[i] < -2147483648)
			return (1);
		i++;
	}
	return (0);
}

void	checkdup1(t_data *data)
{
	int	i;

	i = checkdup(data);
	if (i == 1)
	{
		freeall(data);
		ft_printf("Error\n");
		exit (0);
	}
}

void	split(t_data *data, char *argv)
{
	int	i;
	int	argc;

	i = 0;
	argc = 0;
	while (argv[i])
	{
		if (argv[i] == ' ')
			argc++;
		i++;
	}
	data->nba = argc;
	data->list = argc;
	data->nbarg = 2;
	swap(data, ft_split(argv, ' '), argc + 2);
}

void	initvar(t_data *data, int argc)
{
	data->nba = argc - 2;
	data->list = argc - 2;
	data->nbb = -1;
	data->nbarg = 1; 
}

void	checkarg2(char *argv)
{
	int	i;

	i = 0;
	if (argv[0] == '-')
		i = 1;
	while (argv[i])
	{
		if ((argv[i] < '0' || argv[i] > '9') && argv[i] != '-' && argv[i] != ' ')
		{
			ft_printf("Error\n");
			exit (0);
		}
		if (argv[i] == '-' && (argv[i + 1] == '-' || argv[i + 1] == ' '))
		{
			ft_printf("Error\n");
			exit (0);
		}
		if (argv[i] == '-' && argv[i - 1] != ' ')
		{
			ft_printf("Error\n");
			exit (0);
		}
		i++;
	}
}
