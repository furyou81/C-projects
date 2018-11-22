/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 11:20:07 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 15:26:38 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static void	ft_switch(t_stack *stack, char c, int size)
{
	if (c == 'a' && size >= 0)
		ft_switchfront(stack, 'a');
	else if (c == 'b' && size >= 0)
		ft_switchfront(stack, 'b');
}

static void	ft_rotate(t_stk **stk, int size)
{
	t_stk *tmp;
	t_stk *start;

	if (size > 1)
	{
		tmp = *stk;
		start = tmp->next;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = *stk;
		tmp->next->next = 0;
		*stk = start;
	}
}

static void	ft_reverse_rotate(t_stk **stk, int size)
{
	t_stk *tmp;
	t_stk *end;

	if (size > 1)
	{
		tmp = *stk;
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next->next = *stk;
		end = tmp->next;
		tmp->next = 0;
		*stk = end;
	}
}

static void	ft_opp(t_stack *stack, char op[4])
{
	if (ft_strcmp(op, "ss") == 0)
	{
		ft_swap(&(stack->a), stack->na);
		ft_swap(&(stack->b), stack->nb);
	}
	else if (ft_strcmp(op, "rr") == 0)
	{
		ft_rotate(&(stack->a), stack->na);
		ft_rotate(&(stack->b), stack->nb);
	}
	else if (ft_strcmp(op, "rrr") == 0)
	{
		ft_reverse_rotate(&(stack->a), stack->na);
		ft_reverse_rotate(&(stack->b), stack->nb);
	}
}

void		ft_op(t_stack *stack, char op[4])
{
	if (ft_strcmp(op, "sa") == 0)
		ft_swap(&(stack->a), stack->na);
	else if (ft_strcmp(op, "sb") == 0)
		ft_swap(&(stack->b), stack->nb);
	else if (ft_strcmp(op, "pa") == 0)
		ft_switch(stack, 'a', stack->nb);
	else if (ft_strcmp(op, "pb") == 0)
		ft_switch(stack, 'b', stack->na);
	else if (ft_strcmp(op, "ra") == 0)
		ft_rotate(&(stack->a), stack->na);
	else if (ft_strcmp(op, "rb") == 0)
		ft_rotate(&(stack->b), stack->nb);
	else if (ft_strcmp(op, "rra") == 0)
		ft_reverse_rotate(&(stack->a), stack->na);
	else if (ft_strcmp(op, "rrb") == 0)
		ft_reverse_rotate(&(stack->b), stack->nb);
	else if (ft_strcmp(op, "rrr") == 0 || ft_strcmp(op, "rr") == 0 ||
			ft_strcmp(op, "ss") == 0)
		ft_opp(stack, op);
	else
		ft_error(stack);
}
