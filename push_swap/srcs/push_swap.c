/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:06:00 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/01 18:12:44 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static void	ft_sorttwo(t_stack *stack)
{
	t_stk *tmp;

	tmp = stack->a;
	if (tmp->nb < tmp->next->nb)
		return ;
	else
	{
		ft_ra(stack);
		stack->sorted += 2;
	}
}

static void	ft_solve(t_stack *stack)
{
	if (!ft_is_sorted(&(stack)->a))
	{
		if (stack->na == 2)
			ft_sorttwo(stack);
		else if (stack->na == 3)
			ft_sortthree(stack);
		else if (stack->na == 4)
			ft_sortfour(stack);
		else if (stack->na == 5)
			ft_sortfive(stack);
		else
		{
			ft_first_step(stack);
			ft_second_step(stack);
		}
	}
}

static void	ft_managestr(char *str, t_stack *stack)
{
	char	**tab;
	int		i;

	tab = ft_strsplit(str, ' ');
	i = 0;
	while (tab[i])
	{
		ft_check_valid(tab[i], stack);
		ft_pushback(&(stack->a), ft_atoii(tab[i], stack), stack);
		stack->na++;
		free(tab[i++]);
	}
	free(tab);
}

static void	ft_init(t_stack *stack, int *i)
{
	*i = 1;
	stack->na = 0;
	stack->nb = 0;
	stack->naa = 0;
	stack->a = 0;
	stack->b = 0;
	stack->p = 0;
	stack->r = 0;
	stack->c = 0;
	stack->v = 0;
	stack->error = 0;
	stack->sorted = 0;
	stack->pos = 0;
}

int			main(int argc, char **argv)
{
	t_stack	stack;
	int		i;

	if (argc > 1)
	{
		ft_init(&stack, &i);
		if (argv[1][0] == '-')
			i = ft_i(&stack, argv[1]);
		if (((stack.c == 1 || stack.v == 1) && argc == 3) || argc == 2)
			ft_managestr(argv[argc - 1], &stack);
		else
			while (argv[i])
			{
				ft_check_valid(argv[i], &stack);
				ft_pushback(&(stack.a), ft_atoii(argv[i++], &stack), &stack);
				stack.na++;
			}
		ft_solve(&stack);
		ft_clean(&stack);
		stack.buf[stack.pos] = '\0';
		ft_cleanbuf(&stack);
		if (stack.c == 0 && stack.v == 0)
			write(1, stack.buf, stack.pos);
	}
	return (0);
}
