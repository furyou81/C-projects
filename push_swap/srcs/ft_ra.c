/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:18:55 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 16:48:57 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static void	ft_ras(t_stack *stack, int ok)
{
	if (ok == 0)
	{
		stack->buf[stack->pos++] = 'r';
		stack->buf[stack->pos++] = 'a';
		stack->buf[stack->pos++] = '\n';
		ft_p(stack, "ra");
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

void		ft_ra(t_stack *stack)
{
	int ok;

	ok = 0;
	ft_op(stack, "ra");
	if (stack->pos >= 3)
	{
		if (stack->buf[stack->pos - 3] == 'r' &&
				stack->buf[stack->pos - 2] == 'b')
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
	ft_ras(stack, ok);
}
