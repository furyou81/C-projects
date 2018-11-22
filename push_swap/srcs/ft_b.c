/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 18:08:36 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 16:24:18 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static void	ft_init(t_stack *stack, int *pivot)
{
	*pivot = ft_find_pivot(&(stack)->b, stack->nb, stack);
	ft_pushfront(&(stack)->p, *pivot);
}

static void	ft_action(t_stack *stack, int action)
{
	if (action == 1)
	{
		ft_pa(stack);
		stack->naa++;
	}
	else if (action == 2)
		ft_rb(stack);
	else if (action == 3)
	{
		ft_pa(stack);
		ft_ra(stack);
		stack->sorted++;
	}
}

static int	ft_setaction(int tmpnb, int pivot, t_stk **stk)
{
	if (ft_ismin(stk, tmpnb) == 1)
		return (3);
	else if (tmpnb > pivot)
		return (1);
	else
		return (2);
}

void		ft_b(t_stack *stack)
{
	t_stk	*tmp;
	int		pivot;
	int		action;

	ft_init(stack, &pivot);
	tmp = stack->b;
	if (stack->nb == 4)
		while (tmp && stack->nb > 3)
		{
			if (tmp->nb == ft_maxk(&(stack)->b))
			{
				ft_pa(stack);
				return ;
			}
			tmp = tmp->next;
			ft_rb(stack);
		}
	else
		while (tmp && ft_haveabove(&(stack)->b, pivot) && stack->nb > 3)
		{
			action = ft_setaction(tmp->nb, pivot, &(stack)->b);
			tmp = tmp->next;
			ft_action(stack, action);
		}
}
