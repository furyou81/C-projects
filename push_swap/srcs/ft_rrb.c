/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:34:59 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 16:50:24 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static void	ft_rrbs(t_stack *stack, int ok)
{
	if (ok == 0)
	{
		stack->buf[stack->pos++] = 'r';
		stack->buf[stack->pos++] = 'r';
		stack->buf[stack->pos++] = 'b';
		stack->buf[stack->pos++] = '\n';
		ft_p(stack, "rrb");
	}
}

static void	ft_rrrs(t_stack *stack)
{
	stack->buf[stack->pos - 2] = 'r';
	ft_p(stack, "rrr");
}

static void	ft_pos(t_stack *stack, int *ok)
{
	stack->pos -= 3;
	*ok = 1;
}

void		ft_rrb(t_stack *stack)
{
	int ok;

	ok = 0;
	ft_op(stack, "rrb");
	if (stack->pos >= 3)
	{
		if (stack->buf[stack->pos - 4] == 'r' && stack->buf[stack->pos - 3] ==
				'r' && stack->buf[stack->pos - 2] == 'a')
		{
			ft_rrrs(stack);
			ok = 1;
		}
		else if (stack->buf[stack->pos - 3] == 'r' &&
				stack->buf[stack->pos - 2] == 'b')
		{
			if (stack->pos > 3)
			{
				if (stack->buf[stack->pos - 4] == '\n')
					ft_pos(stack, &ok);
			}
			else
				ft_pos(stack, &ok);
		}
	}
	ft_rrbs(stack, ok);
}
