# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: porg <porg@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 16:46:56 by porg              #+#    #+#              #
#    Updated: 2022/05/22 15:54:59 by porg             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_fct.c ft_fct2.c ft_itoa.c\
	   ft_printf.c ft_strjoin.c ft_putstr_fd.c ft_putchar_fd.c ft_strlcpy.c ft_split.c

OBJS = ${SRCS:.c=.o}

GCC  = gcc -c

RM   = rm -f

AR   = ar cr

RLIB = ranlib

NAME = libftprintf.a

${NAME}:	${OBJS}
						${AR} ${NAME} ${OBJS}
						${RLIB} ${NAME}

all:		${NAME}

clean:
						${RM} ${OBJS}

fclean:		clean
						${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
