# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/15 11:36:53 by lfujimot          #+#    #+#              #
#    Updated: 2017/08/18 11:11:57 by lfujimot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = srcs/ft_atoi.c srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_math.c srcs/ft_putstr.c srcs/ft_atoi.c

SRCO = ft_atoi.o ft_putchar.o ft_putnbr.o ft_math.o ft_putstr.o

MAIN = srcs/ft_main.c

all: $(NAME)

$(NAME):
		gcc -Wall -Werror -Wextra -c $(SRC) $(MAIN)
		gcc $(SRCO) ft_main.o -o $(NAME)
clean:
	rm -f $(SRCO) ft_main.o

fclean: clean
	rm -f $(NAME)

re: fclean all
