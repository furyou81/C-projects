/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:13:04 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 16:49:24 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static void	ft_rbs(t_stack *stack, int ok)
{
	if (ok == 0)
	{
		stack->buf[stack->pos++] = 'r';
		stack->buf[stack->pos++] = 'b';
		stack->buf[stack->pos++] = '\n';
		ft_p(stack, "rb");
	}
}

static void	ft_rrs(t_stack *stack)
{
	stack->pos -= 3;
	stack->buf[stack->pos++] = 'r';
	stack->buf[stack->pos++] = 'r';
	stack->buf[stack->pos++] = '\n';
	ft_p(stack, "rr");
}

void		ft_rb(t_stack *stack)
{
	int ok;

	ok = 0;
	ft_op(stack, "rb");
	if (stack->pos >= 3)
	{
		if (stack->buf[stack->pos - 3] == 'r' &&
				stack->buf[stack->pos - 2] == 'a')
		{
			if (stack->pos > 3)
			{
				if (stack->buf[stack->pos - 4] == '\n')
				{
					ft_rrs(stack);
					ok = 1;
				}
			}
			else
			{
				stack->pos -= 3;
				ok = 1;
			}
		}
	}
	ft_rbs(stack, ok);
}
