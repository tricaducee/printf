# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 20:47:41 by hrolle            #+#    #+#              #
#    Updated: 2022/01/01 00:11:05 by hrolle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CfLAGS	=	-Wall -Wextra -Werror

CC		=	cc

SRCS	=	ft_printf.c	ft_strlen.c	ft_putchar_l.c	\
		ft_putstr_l.c	ft_putnbr_l.c	ft_putnbr_u_l.c	\
		ft_strchr.c	ft_putnbr_base_l.c

OBJS	=	${SRCS:.c=.o}

RM		=	rm -f

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

all:		${NAME}

clean:
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean all
