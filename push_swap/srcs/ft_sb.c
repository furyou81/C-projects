/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 14:39:33 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 16:48:09 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

void	ft_sb(t_stack *stack)
{
	ft_op(stack, "sb");
	stack->buf[stack->pos++] = 's';
	stack->buf[stack->pos++] = 'b';
	stack->buf[stack->pos++] = '\n';
	ft_p(stack, "sb");
}
