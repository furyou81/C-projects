# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/06 11:08:24 by lfujimot          #+#    #+#              #
#    Updated: 2018/02/01 18:08:16 by lfujimot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

NNAME = push_swap

SRCS = srcs/ft_atoii.c \
	   srcs/ft_isdigit.c \
	   srcs/ft_read.c \
	   srcs/ft_error.c \
	   srcs/ft_op.c \
	   srcs/ft_strcmp.c \
	   srcs/ft_pushback.c \
	   srcs/ft_pushfront.c \
	   srcs/ft_insert.c \
	   srcs/ft_switchfront.c \
	   srcs/ft_clean.c \
	   srcs/ft_check_valid.c \
	   srcs/ft_getlast.c \
	   srcs/ft_second_step.c \
	   srcs/ft_first_step.c \
	   srcs/ft_find_pivot.c \
	   srcs/ft_swap.c \
	   srcs/ft_pa.c \
	   srcs/ft_pb.c \
	   srcs/ft_sa.c \
	   srcs/ft_sb.c \
	   srcs/ft_ra.c \
	   srcs/ft_rb.c \
	   srcs/ft_rra.c \
	   srcs/ft_rrb.c \
	   srcs/ft_managea.c \
	   srcs/ft_is_sorted.c \
	   srcs/ft_removefirst.c \
	   srcs/ft_maxk.c \
	   srcs/ft_ismin.c \
	   srcs/ft_maxx.c \
	   srcs/ft_maxt.c \
	   srcs/ft_sortthree.c \
	   srcs/ft_sortthreeb.c \
	   srcs/ft_sortthreef.c \
	   srcs/ft_sortfour.c \
	   srcs/ft_sortfive.c \
	   srcs/ft_strsplit.c \
	   srcs/ft_strsub.c \
	   srcs/ft_a.c \
	   srcs/ft_b.c \
	   srcs/ft_countbelow.c \
	   srcs/ft_belowthree.c \
	   srcs/ft_above.c \
	   srcs/ft_haveabove.c \
	   srcs/ft_sortsmall.c \
	   srcs/ft_cleanbuf.c \
	   srcs/ft_print_color.c \
	   srcs/ft_i.c \
	   srcs/ft_p.c \
	   srcs/ft_print.c \
	   srcs/ft_lstnew.c

MAINS = srcs/checker.c

MMAINS = srcs/push_swap.c

O = $(SRCS:.c=.o)

M = $(MAINS:.c=.o)

MM = $(MMAINS:.c=.o)

PRINTF = printf

PF = printf/libftprintf.a

CFLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(NAME): $(O) $(M) $(MM)
	$(MAKE) -C $(PRINTF)
	gcc $(O) $(M) $(PF) -o $(NAME)
	gcc $(O) $(MM) $(PF) -o $(NNAME)

clean: $(PRINTF)
	rm -f $(O) $(M) $(MM)
	make -C "$(PRINTF)" clean

fclean: clean $(PRINTF)
	rm -f $(NAME) $(NNAME)
	make -C "$(PRINTF)" fclean

re: fclean all $(PRINTF)
