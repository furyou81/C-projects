/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 10:57:54 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/01 18:08:36 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECKER_H
# define FT_CHECKER_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define BLUE    "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN    "\x1b[36m"
# define UNDER    "\x1b[4m"
# define ITAL    "\x1b[2m"
# define GREY    "\x1b[3m"
# define COLOR    "\x1b[37m"
# define COLORR    "\x1b[30m"
# define COLORRR    "\x1b[43m"
# define RESET   "\x1b[0m"
# define RESETT   "\x1b[40m"

typedef struct		s_stk
{
	int				nb;
	struct s_stk	*next;
}					t_stk;

typedef struct		s_stack
{
	t_stk			*a;
	t_stk			*b;
	t_stk			*p;
	int				na;
	int				nb;
	int				naa;
	int				sorted;
	int				r;
	int				c;
	int				v;
	int				error;
	char			buf[128000];
	intmax_t		pos;
}					t_stack;

typedef struct		s_pos
{
	int				pospivot;
	int				posmax;
}					t_pos;

void				ft_error(t_stack *stack);
void				ft_read(t_stack *stack);
intmax_t			ft_atoii(const char *str, t_stack *stack);
int					ft_isdigit(char c);
int					ft_strcmp(const char *s1, const char *s2);
void				ft_op(t_stack *stack, char op[4]);
void				ft_swap(t_stk **stk, int size);
void				ft_pushback(t_stk **stk, int nb, t_stack *stack);
void				ft_pushfront(t_stk **stk, int nb);
int					ft_insert(t_stk **stk, int nb, t_stack *stack);
t_stk				*ft_lstnew(int nb);
void				ft_switchfront(t_stack *stack, char c);
void				ft_clean(t_stack *stack);
void				ft_cleanlist(t_stk **stk);
void				ft_check_valid(char *str, t_stack *stack);
int					ft_getlast(t_stk **stk);
void				ft_second_step(t_stack *stack);
void				ft_first_step(t_stack *stack);
int					ft_find_pivot(t_stk **stk, int size, t_stack *stack);
void				ft_pa(t_stack *stack);
void				ft_pb(t_stack *stack);
void				ft_sa(t_stack *stack);
void				ft_sb(t_stack *stack);
void				ft_ra(t_stack *stack);
void				ft_rb(t_stack *stack);
void				ft_rra(t_stack *stack);
void				ft_rrb(t_stack *stack);
void				ft_managea(t_stack *stack);
int					ft_is_sorted(t_stk **stk);
void				ft_removefirst(t_stk **stk);
int					ft_maxk(t_stk **stk);
int					ft_ismin(t_stk **stk, int n);
int					ft_maxx(t_stk **stk);
int					ft_maxt(t_stk **stk, int n);
void				ft_sortthree(t_stack *stack);
void				ft_sortthreeb(t_stack *stack);
void				ft_sortthreef(t_stack *stack);
void				ft_sortfour(t_stack *stack);
void				ft_sortfive(t_stack *stack);
char				**ft_strsplit(char *s, char c);
char				*ft_strsub(char *s, unsigned int start, size_t len);
void				ft_a(t_stack *stack);
void				ft_b(t_stack *stack);
int					ft_countbelow(t_stk **stk, int v, int size);
void				ft_belowthree(t_stack *stack);
int					ft_above(t_stk **stk, int v);
int					ft_haveabove(t_stk **stk, int v);
void				ft_sortsmall(t_stack *stack);
void				ft_cleanbuf(t_stack *stack);
int					ft_printf(const char *format, ...);
void				ft_print_color(char *str);
int					ft_i(t_stack *stack, char *arg);
void				ft_print(t_stack *stack);
void				ft_p(t_stack *stack, char *tabi);
#endif
