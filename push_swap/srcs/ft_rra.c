/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:20:33 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 16:50:00 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static void	ft_rras(t_stack *stack, int ok)
{
	if (ok == 0)
	{
		stack->buf[stack->pos++] = 'r';
		stack->buf[stack->pos++] = 'r';
		stack->buf[stack->pos++] = 'a';
		stack->buf[stack->pos++] = '\n';
		ft_p(stack, "rra");
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

void		ft_rra(t_stack *stack)
{
	int ok;

	ok = 0;
	ft_op(stack, "rra");
	if (stack->pos >= 3)
	{
		if (stack->buf[stack->pos - 4] == 'r' && stack->buf[stack->pos - 3] ==
				'r' && stack->buf[stack->pos - 2] == 'b')
		{
			ft_rrrs(stack);
			ok = 1;
		}
		if (stack->buf[stack->pos - 3] == 'r' &&
				stack->buf[stack->pos - 2] == 'a')
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
	ft_rras(stack, ok);
}
