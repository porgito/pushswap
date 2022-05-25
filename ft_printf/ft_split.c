/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: porg <porg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:48:57 by porg              #+#    #+#             */
/*   Updated: 2022/05/22 15:50:26 by porg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	char	**ft_malloc_error(char **ptr, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(ptr[i]);
		ptr[i] = 0;
		i++;
	}
	free(ptr);
	ptr = 0;
	return (NULL);
}

static	int	get_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else if (s[i])
			i++;
	}
	return (count);
}

static	char	**ft_split2(char **ptr, char const *s, char c, int count)
{
	int	i;
	int	j;
	int	word_len;
	int	start;

	i = 0;
	j = -1;
	while (s[i] && ++j < count)
	{
		word_len = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			word_len++;
			if (word_len == 1)
				start = i - 1;
		}
		ptr[j] = (char *)malloc((word_len + 1) * sizeof(char));
		if (!ptr[j])
			return (ft_malloc_error(ptr, j));
		ft_strlcpy(ptr[j], (char *)s + start, word_len + 1);
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		count;

	if (!s)
		return (0);
	count = get_count(s, c);
	ptr = (char **)malloc(sizeof(char *) * (count + 1));
	if (!ptr)
		return (NULL);
	ptr[count] = NULL;
	return (ft_split2(ptr, s, c, count));
}
