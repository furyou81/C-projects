/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortthreef.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 17:43:36 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/19 14:47:03 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static void		ft_one(t_stack *stack)
{
	ft_pa(stack);
	ft_ra(stack);
	stack->sorted++;
}

static void		ft_trois(t_stack *stack, int one, int two, int three)
{
	if (one < two && two < three)
		while (stack->nb > 0)
		{
			ft_pa(stack);
			ft_ra(stack);
			stack->sorted++;
		}
	else if (one < three && three < two)
	{
		ft_rrb(stack);
		ft_sb(stack);
	}
	else if (one > two && three > one)
		ft_sb(stack);
	else if (three < one && one < two)
		ft_rrb(stack);
	else if (two < three && three < one)
		ft_rb(stack);
	else if (one > two && two > three)
	{
		ft_sb(stack);
		ft_rrb(stack);
	}
}

static void		ft_two(t_stack *stack, int one, int two)
{
	if (one > two)
		ft_sb(stack);
	ft_pa(stack);
	ft_ra(stack);
	ft_pa(stack);
	ft_ra(stack);
	stack->sorted += 2;
}

static void		ft_pas(t_stack *stack, int *t)
{
	*t = 1;
	ft_pa(stack);
}

void			ft_sortthreef(t_stack *stack)
{
	t_stk	*tmp;
	int		t;

	t = 0;
	tmp = stack->b;
	if (stack->nb == 4)
		while (tmp && t == 0)
			if (ft_maxt(&(stack)->b, tmp->nb))
			{
				tmp = tmp->next;
				ft_pas(stack, &t);
			}
			else
			{
				tmp = tmp->next;
				ft_rb(stack);
			}
	else if (stack->nb == 1)
		ft_one(stack);
	else if (stack->nb == 2)
		ft_two(stack, stack->b->nb, stack->b->next->nb);
	if (stack->nb == 3 || stack->nb == 4)
		ft_trois(stack, stack->b->nb, stack->b->next->nb,
		stack->b->next->next->nb);
}
