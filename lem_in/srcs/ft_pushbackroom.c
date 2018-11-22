/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushbackroom.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 16:29:33 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/28 16:34:44 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

void	ft_pushbackroom(t_room **room, char *name, t_pos pos, t_status status)
{
	t_room *new;

	new = *room;
	if (new)
	{
		while (new->next)
		{
			new = new->next;
		}
		new->next = ft_lstnewroom(name, pos, status);
	}
	else
		*room = ft_lstnewroom(name, pos, status);
}
