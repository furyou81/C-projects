/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:09:10 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 16:42:50 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

void	ft_pa(t_stack *stack)
{
	ft_op(stack, "pa");
	if (stack->pos >= 3)
	{
		if (stack->buf[stack->pos - 3] == 'p' &&
			stack->buf[stack->pos - 2] == 'b')
		{
			stack->pos = stack->pos - 3;
		}
		else
		{
			stack->buf[stack->pos++] = 'p';
			stack->buf[stack->pos++] = 'a';
			stack->buf[stack->pos++] = '\n';
			ft_p(stack, "pa");
		}
	}
	else
	{
		stack->buf[stack->pos++] = 'p';
		stack->buf[stack->pos++] = 'a';
		stack->buf[stack->pos++] = '\n';
		ft_p(stack, "pa");
	}
}
