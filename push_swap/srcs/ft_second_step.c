/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_second_step.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 18:29:51 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 15:26:17 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static int	ft_setaction(int tmpnb, t_stack *stack)
{
	if (ft_ismin(&(stack)->b, tmpnb) == 1)
		return (1);
	else if (tmpnb > stack->p->nb)
		return (2);
	else
		return (3);
}

static int	ft_action(t_stack *stack, int action, int countrb)
{
	if (action == 1)
	{
		ft_pa(stack);
		ft_ra(stack);
		stack->sorted++;
	}
	else if (action == 2)
	{
		ft_pa(stack);
		stack->naa++;
	}
	else
	{
		ft_rb(stack);
		countrb++;
	}
	return (countrb);
}

static void	ft_bstart(t_stack *stack)
{
	t_stk	*tmp;
	int		countrb;
	int		below;
	int		action;

	ft_pushfront(&(stack)->p, ft_find_pivot(&(stack)->b, stack->nb, stack));
	countrb = 0;
	tmp = stack->b;
	below = ft_countbelow(&(stack)->b, stack->p->nb, stack->nb);
	while (tmp && ft_haveabove(&(stack)->b, stack->p->nb) && stack->nb > 3)
	{
		action = ft_setaction(tmp->nb, stack);
		tmp = tmp->next;
		countrb = ft_action(stack, action, countrb);
	}
}

static void	ft_sort(t_stack *stack)
{
	ft_pa(stack);
	ft_ra(stack);
	stack->sorted++;
	stack->naa++;
}

void		ft_second_step(t_stack *stack)
{
	stack->naa = stack->na;
	while (stack->nb > 35)
		ft_bstart(stack);
	ft_sortsmall(stack);
	while (stack->nb > 0)
		ft_sort(stack);
	while (stack->nb > 0 || !ft_is_sorted(&(stack)->a))
	{
		while (stack->nb == 0 && !(stack->nb == 0 && ft_is_sorted(&(stack)->a)))
			ft_a(stack);
		while (stack->nb > 35)
			ft_b(stack);
		if (stack->nb != 0)
			ft_sortsmall(stack);
		while (stack->nb > 0)
			ft_sort(stack);
	}
}
