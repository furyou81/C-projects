# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/15 17:33:38 by lfujimot          #+#    #+#              #
#    Updated: 2018/07/09 20:24:24 by wael-bou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

INCLUDES =

SRCS = main.c ft_error.c ft_read_input.c ft_check_valid.c ft_check_piece.c ft_init_grille.c ft_lst_add.c ft_solve.c ft_lst_del_all.c ft_usage.c

OBJECTS = main.o ft_error.o ft_read_input.o ft_check_valid.o ft_check_piece.o ft_init_grille.o ft_lst_add.o ft_solve.o ft_lst_del_all.o ft_usage.o

LIB = libft.a

LIBFTSRC = libft/ft_memset.c libft/ft_bzero.c libft/ft_memcpy.c libft/ft_memccpy.c libft/ft_memmove.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_strlen.c libft/ft_strdup.c libft/ft_strcpy.c libft/ft_strncpy.c libft/ft_strcat.c libft/ft_strncat.c libft/ft_strlcat.c libft/ft_strchr.c libft/ft_strrchr.c libft/ft_strcmp.c libft/ft_strncmp.c libft/ft_strstr.c libft/ft_strnstr.c libft/ft_strsub.c libft/ft_strncmp.c libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_atoi.c libft/ft_isalnum.c libft/ft_isascii.c libft/ft_isprint.c libft/ft_toupper.c libft/ft_tolower.c libft/ft_memalloc.c libft/ft_memdel.c libft/ft_strnew.c libft/ft_strclr.c libft/ft_striter.c libft/ft_striteri.c libft/ft_strmap.c libft/ft_strmapi.c libft/ft_strequ.c libft/ft_strnequ.c libft/ft_strjoin.c libft/ft_strtrim.c libft/ft_strsplit.c libft/ft_itoa.c libft/ft_putchar.c libft/ft_putstr.c libft/ft_putendl.c libft/ft_putnbr.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c libft/ft_strdel.c libft/ft_lstnew.c libft/ft_lstdelone.c libft/ft_lstdel.c libft/ft_lstadd.c libft/ft_lstiter.c libft/ft_lstmap.c libft/ft_min.c libft/ft_max.c libft/ft_pushback.c libft/ft_lstget.c libft/ft_lstlast.c libft/ft_lstprint.c

LIBFTOBJ = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strcmp.o ft_strncmp.o ft_strstr.o ft_strnstr.o ft_strsub.o ft_strncmp.o ft_isalpha.o ft_isdigit.o ft_atoi.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strjoin.o ft_strtrim.o ft_strsplit.o ft_itoa.o ft_putchar.o ft_putstr.o ft_putendl.o ft_putnbr.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_strdel.o ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o ft_min.o ft_max.o ft_pushback.o ft_lstget.o ft_lstlast.o ft_lstprint.o

all: $(NAME)

$(NAME):
	gcc -c -Werror -Wextra -Wall $(LIBFTSRC)
	ar rc $(LIB) $(LIBFTOBJ)
	ranlib $(LIB)
	gcc -c -Werror -Wextra -Wall $(SRCS)
	gcc $(OBJECTS) $(LIB) -o $(NAME)

clean:
	rm -f $(OBJECTS) $(LIBFTOBJ)

fclean: clean
	rm -f $(NAME) $(LIB)

re: fclean all
