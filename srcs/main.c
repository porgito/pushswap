/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:34:47 by jlaurent          #+#    #+#             */
/*   Updated: 2022/05/18 17:40:21 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	swap(t_data *data, char **argv, int argc)
{
	int	i;

	data->taba = (long *)malloc(sizeof(long) * argc + 1);
	data->tabb = (long *)malloc(sizeof(long) * argc + 1);
	i = 0;
	while (argc > 1)
	{
		data->taba[i] = ft_atoi(argv[i + 1]);
		i++;
		argc--;
	}
}

void	freeall(t_data *data)
{
	free(data->taba);
	free(data->tabb);
	free(data);
}

void	init(t_data *data)
{
	if (data->nba > 4)
	{
		parse(data);
		sort(data);
	}
	else if (data->nba > 2)
		sort2(data);
	else
		sort3(data);
}

void	checkarg(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] == '-' && argv[i][j - 1] != '\0')
			{
				ft_printf("Error\n");
				exit (0);
			}
			if (argv[i][j] == '-')
				j++;
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				ft_printf("Error\n");
				exit (0);
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_data	*data;
	int		i;

	if (argc == 1)
		return (0);
	checkarg(argc, argv);
	i = 0;
	data = (t_data *)malloc(sizeof(t_data));
	if (!data)
		return (-1);
	data->nba = argc - 2;
	data->list = argc - 2;
	data->nbb = -1;
	swap(data, argv, argc);
	checkdup1(data);
	if (check(data) == 1)
	{
		freeall(data);
		return (0);
	}
	findlow(data);
	init(data);
}
