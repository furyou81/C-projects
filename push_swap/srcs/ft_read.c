/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 11:19:30 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 15:29:19 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

void	ft_read(t_stack *stack)
{
	char	buf[1];
	char	op[4];
	int		i;

	i = 0;
	while (read(0, buf, 1))
	{
		if (i > 3)
		{
			ft_error(stack);
			return ;
		}
		else if (buf[0] == '\n')
		{
			op[i] = '\0';
			ft_op(stack, op);
			i = 0;
			op[0] = '\0';
			op[1] = '\0';
			op[2] = '\0';
			op[3] = '\0';
		}
		else
			op[i++] = buf[0];
	}
}
