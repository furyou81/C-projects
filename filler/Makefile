# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/06 12:28:26 by lfujimot          #+#    #+#              #
#    Updated: 2018/02/26 15:11:04 by lfujimot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lfujimot.filler

SRCS = srcs/filler.c \
	   srcs/ft_read_input.c \
	   srcs/ft_parsemap.c \
	   srcs/ft_cleanmap.c \
	   srcs/ft_findpos.c \
	   srcs/ft_putpiece.c \
	   srcs/ft_fill.c \
	   srcs/ft_close.c \
	   srcs/ft_closeleft.c \
	   srcs/ft_closeright.c \
	   srcs/ft_strangle.c \
	   srcs/ft_canput.c \
	   srcs/ft_befwh.c \
	   srcs/ft_aftwh.c \
	   srcs/ft_freetab.c \
	   srcs/ft_wh.c \
	   srcs/ft_fillmap.c \
	   srcs/get_next_line.c

OBJS = $(SRCS:.c=.o)

LIBFT = libft

LFT = libft/libft.a

PRINTF = printf

PF = printf/libftprintf.a

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT)
	$(MAKE) -C $(PRINTF)
	gcc $(OBJS) $(LFT) $(PF) -o $(NAME)

clean: $(LIBFT) $(PRINTF)
	rm -f $(OBJS)
	make -C "$(LIBFT)" clean
	make -C "$(PRINTF)" clean

fclean: clean $(LIBFT) $(PRINTF)
	rm -f $(NAME)
	make -C "$(LIBFT)" fclean
	make -C "$(PRINTF)" fclean

re: fclean all $(LIBFT) $(PRINTF)
