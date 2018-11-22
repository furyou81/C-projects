/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushbacktube.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 16:25:09 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/29 19:29:15 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

void	ft_pushbacktube(t_tube **tube, t_room *room)
{
	t_tube *new;

	new = *tube;
	if (new)
	{
		while (new->next)
		{
			new = new->next;
		}
		if (new)
			new->next = ft_lstnewtube(room);
	}
	else
		*tube = ft_lstnewtube(room);
}
