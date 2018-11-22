/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortfive.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 12:20:13 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 16:24:03 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static int	ft_where(t_stk **stk, int max)
{
	t_stk	*tmp;
	int		pos;

	pos = 1;
	tmp = *stk;
	while (tmp)
	{
		if (tmp->nb == max)
			return (pos);
		tmp = tmp->next;
		pos++;
	}
	return (0);
}

static void	ft_five(t_stack *stack, int pos[2])
{
	ft_rra(stack);
	ft_pb(stack);
	if (pos[0] == 4 || pos[1] == 4)
	{
		ft_rra(stack);
		ft_pb(stack);
	}
}

static void	ft_init(t_stack *stack, int *i, int *max, int *maxx)
{
	*i = 0;
	*max = ft_maxk(&(stack)->a);
	*maxx = ft_maxx(&(stack)->a);
}

void		ft_sortfive(t_stack *stack)
{
	t_stk	*tmp;
	int		max;
	int		maxx;
	int		i;
	int		pos[2];

	ft_init(stack, &i, &max, &maxx);
	pos[0] = ft_where(&(stack)->a, max);
	pos[1] = ft_where(&(stack)->a, maxx);
	tmp = stack->a;
	if (pos[0] == 5 || pos[1] == 5)
		ft_five(stack, pos);
	while (tmp && i++ < 5 && stack->na > 3)
		if (tmp->nb == max || tmp->nb == maxx)
		{
			tmp = tmp->next;
			ft_pb(stack);
		}
		else
		{
			tmp = tmp->next;
			ft_ra(stack);
		}
	ft_sortthree(stack);
	ft_sortthreef(stack);
}
