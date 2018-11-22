/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushbackant.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 16:04:17 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/06 17:07:22 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

void	ft_pushbackant(t_ant **ants, int nb, t_room *pos)
{
	t_ant *new;

	new = *ants;
	if (new)
	{
		while (new->next)
			new = new->next;
		if (new)
			new->next = ft_lstnewant(nb, pos);
	}
	else
		*ants = ft_lstnewant(nb, pos);
}
