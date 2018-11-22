/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_above.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 18:10:42 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/17 18:11:22 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

int	ft_above(t_stk **stk, int v)
{
	t_stk	*tmp;
	int		count;

	count = 0;
	tmp = *stk;
	while (tmp)
	{
		if (tmp->nb > v)
			count++;
		tmp = tmp->next;
	}
	return (count);
}
