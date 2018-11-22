/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_haveabove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 18:13:29 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/17 18:13:48 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

int	ft_haveabove(t_stk **stk, int v)
{
	t_stk	*tmp;

	tmp = *stk;
	while (tmp)
	{
		if (tmp->nb > v)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
