/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:15:08 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 16:47:07 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

void	ft_pb(t_stack *stack)
{
	ft_op(stack, "pb");
	if (stack->pos >= 3)
	{
		if (stack->buf[stack->pos - 3] == 'p' &&
			stack->buf[stack->pos - 2] == 'a')
		{
			stack->pos = stack->pos - 3;
		}
		else
		{
			stack->buf[stack->pos++] = 'p';
			stack->buf[stack->pos++] = 'b';
			stack->buf[stack->pos++] = '\n';
			ft_p(stack, "pb");
		}
	}
	else
	{
		stack->buf[stack->pos++] = 'p';
		stack->buf[stack->pos++] = 'b';
		stack->buf[stack->pos++] = '\n';
		ft_p(stack, "pb");
	}
}
