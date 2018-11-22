/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 17:23:10 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 15:23:28 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static int	ft_ismina(t_stack *stack, int n)
{
	int		i;
	t_stk	*tmp;

	tmp = stack->a;
	i = 0;
	while (tmp && i++ < stack->na - stack->sorted)
	{
		if (tmp->nb < n)
			return (0);
		tmp = tmp->next;
	}
	if (stack->nb == 0)
	{
		ft_ra(stack);
		stack->sorted++;
		return (1);
	}
	return (0);
}

static void	ft_threefour(t_stack *stack)
{
	int		countra;
	t_stk	*tmp;

	tmp = stack->a;
	countra = 0;
	while (tmp && tmp->nb <= stack->p->nb)
	{
		if (tmp->nb < stack->p->nb)
		{
			tmp = tmp->next;
			ft_pb(stack);
		}
		else
		{
			tmp = tmp->next;
			ft_ra(stack);
			countra++;
		}
	}
	while (countra-- > 0)
		ft_rra(stack);
}

static void	ft_five(t_stack *stack, int below)
{
	int		pivot;
	t_stk	*tmp;
	int		countra;

	countra = 0;
	tmp = stack->a;
	pivot = ft_find_pivot(&(stack)->a, below, stack);
	while (tmp && tmp->nb <= stack->p->nb)
	{
		if (tmp->nb <= pivot)
		{
			tmp = tmp->next;
			ft_pb(stack);
		}
		else
		{
			tmp = tmp->next;
			ft_ra(stack);
			countra++;
		}
	}
	while (countra-- > 0)
		ft_rra(stack);
}

static void	ft_abovefive(t_stack *stack, int below)
{
	int		pivot;
	t_stk	*tmp;
	int		countra;

	countra = 0;
	tmp = stack->a;
	pivot = ft_find_pivot(&(stack)->a, below, stack);
	while (tmp && tmp->nb <= stack->p->nb)
	{
		if (tmp->nb < pivot)
		{
			tmp = tmp->next;
			ft_pb(stack);
		}
		else
		{
			tmp = tmp->next;
			ft_ra(stack);
			countra++;
		}
	}
	while (countra-- > 0)
		ft_rra(stack);
}

void		ft_a(t_stack *stack)
{
	t_stk	*tmp;
	int		below;

	below = ft_countbelow(&(stack)->a, stack->p->nb, stack->na - stack->sorted);
	tmp = stack->a;
	if (ft_ismina(stack, stack->a->nb) && stack->nb == 0)
		return ;
	if (stack->na - stack->sorted < 17)
	{
		while (stack->na - stack->sorted > 0)
			ft_pb(stack);
		return ;
	}
	if (below == 0 || below == 1 || below == 2)
		ft_belowthree(stack);
	else if (below == 4 || below == 3)
		ft_threefour(stack);
	else if (below == 5)
		ft_five(stack, below);
	else
		ft_abovefive(stack, below);
}
