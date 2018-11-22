/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 11:45:05 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/18 18:15:49 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

t_stk	*ft_lstnew(int nb)
{
	t_stk *stk;

	stk = (t_stk *)malloc(sizeof(*stk));
	if (stk == 0)
	{
		free(stk);
		return (0);
	}
	else
	{
		stk->nb = nb;
		stk->next = 0;
	}
	return (stk);
}
