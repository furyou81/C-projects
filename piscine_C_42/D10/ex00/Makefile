#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/14 11:56:05 by lfujimot          #+#    #+#              #
#    Updated: 2017/08/21 12:05:31 by lfujimot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_strcmp.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar rc $(NAME) ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o
	ranlib libft.a

clean:
	rm -f ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o

fclean: clean
	rm -f $(NAME)

re: fclean all
