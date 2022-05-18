# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 16:56:30 by jlaurent          #+#    #+#              #
#    Updated: 2022/05/18 17:37:42 by jlaurent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ${wildcard ./srcs/*.c}

OBJS	= ${SRCS:.c=.o} 

PRINTF	= ./ft_printf/libftprintf.a

GCC		= gcc -Wall -Werror -Wextra -g

RM		= rm -f

NAME	= push_swap

all:		${NAME}

${NAME}:	${OBJS}
						${GCC} ${SRCS} ${PRINTF} -I. -I./ft_printf -o ${NAME}

clean:
						${RM} ${OBJS}

fclean:		clean
						${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
