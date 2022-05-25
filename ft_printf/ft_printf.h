/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: porg <porg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:24:30 by porg              #+#    #+#             */
/*   Updated: 2022/05/22 15:54:39 by porg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct s_print
{
	va_list	args;
	int		tl;
}	t_print;

//////////////////////////////////////

void	ft_putptr(t_print *tab, unsigned long int n);
void	ft_putstr(t_print *tab, char const *str);
void	*ft_itoa(t_print *tab, int n);
void	ft_base(t_print *tab, unsigned int n, char c);
void	ft_putchar(t_print *tab, char c);
void	ft_putuns(t_print *tab, unsigned int n);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
char	**ft_split(char const *s, char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
long	ft_atoi(char *nb);
int		ft_printf(const char *s, ...);

#endif
