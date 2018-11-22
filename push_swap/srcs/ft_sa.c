/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:16:35 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 16:47:45 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

void	ft_sa(t_stack *stack)
{
	ft_op(stack, "sa");
	stack->buf[stack->pos++] = 's';
	stack->buf[stack->pos++] = 'a';
	stack->buf[stack->pos++] = '\n';
	ft_p(stack, "sa");
}
