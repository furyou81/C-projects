/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 11:21:55 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/27 17:16:50 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static void	ft_check_ordered(t_stack *stack)
{
	t_stk *tmp;

	tmp = stack->a;
	if (tmp)
	{
		while (tmp->next)
		{
			if (tmp->nb > tmp->next->nb)
			{
				write(1, "KO\n", 3);
				return ;
			}
			tmp = tmp->next;
		}
	}
	if (stack->nb == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

static void	ft_init(int *i, t_stack *stack)
{
	*i = 1;
	stack->na = 0;
	stack->nb = 0;
	stack->a = 0;
	stack->b = 0;
}

static void	ft_managestr(t_stack *stack, char *str)
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

int			main(int argc, char **argv)
{
	t_stack stack;
	int		i;

	if (argc > 1)
	{
		ft_init(&i, &stack);
		if (argc == 2)
			ft_managestr(&stack, argv[1]);
		else
			while (argv[i])
			{
				ft_check_valid(argv[i], &stack);
				ft_pushback(&(stack.a), ft_atoii(argv[i++], &stack), &stack);
				stack.na++;
			}
		ft_read(&stack);
		ft_check_ordered(&stack);
		ft_clean(&stack);
	}
	return (0);
}
