# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 20:19:59 by lfujimot          #+#    #+#              #
#    Updated: 2017/11/08 20:55:22 by lfujimot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = srcs/main.c srcs/ft_putcharout.c
OBJECT = main.o ft_putcharout.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc $(OBJECT) -o $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
