/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countbelow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 17:28:57 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/17 18:04:26 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

int	ft_countbelow(t_stk **stk, int v, int size)
{
	int		count;
	t_stk	*tmp;
	int		i;

	i = 0;
	tmp = *stk;
	count = 0;
	while (tmp && i++ < size)
	{
		if (tmp->nb <= v)
			count++;
		tmp = tmp->next;
	}
	return (count);
}
