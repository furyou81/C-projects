# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/02 19:41:16 by lfujimot          #+#    #+#              #
#    Updated: 2018/02/14 16:02:17 by lfujimot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem-in

SRCS =  srcs/ft_addants.c \
	    srcs/ft_lstnewroom.c \
   	    srcs/ft_setstatus.c \
		srcs/ft_atoii.c \
		srcs/ft_lstnewtube.c \
		srcs/ft_cleananthill.c \
		srcs/ft_countchar.c \
		srcs/ft_nextmove.c \
		srcs/ft_error.c	\
		srcs/ft_parse_lemin.c \
		srcs/ft_freetab.c \
		srcs/ft_parseroom.c \
		srcs/ft_getroom.c \
		srcs/ft_parsetube.c	\
		srcs/ft_initstartend.c \
		srcs/ft_printrooms.c \
		srcs/ft_iscmd.c	\
		srcs/ft_pushbackant.c \
		srcs/ft_iscomment.c	\
		srcs/ft_pushbackroom.c \
		srcs/get_next_line.c \
		srcs/ft_pushbacktube.c \
		srcs/lemin.c \
		srcs/ft_lstnewant.c	\
		srcs/ft_lstnewparsing.c	\
		srcs/ft_pushbackparsing.c	\
		srcs/ft_pushbacktrash.c	\
		srcs/ft_printparsing.c	\
		srcs/ft_process.c	\
		srcs/ft_cleantube.c	\
		srcs/ft_reset.c

OBJS = $(SRCS:.c=.o)

FTPRINTF = printf

PF = printf/libftprintf.a

LIBFT = libft

LFT = libft/libft.a

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(FTPRINTF)
	$(MAKE) -C $(LIBFT)
	gcc $(OBJS) $(PF) $(LFT) -o $(NAME)

clean: $(FTPRINTF) $(LIBFT)
	rm -f $(OBJS)
	make -C "$(FTPRINTF)" clean
	make -C "$(LIBFT)" clean

fclean: clean $(FTPRINTF) $(LIBFT)
	rm -f $(NAME)
	make -C "$(FTPRINTF)" fclean
	make -C "$(LIBFT)" fclean

re: fclean all $(FTPRINTF) $(LIBFT)
