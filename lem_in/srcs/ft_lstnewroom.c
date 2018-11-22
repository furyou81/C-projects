/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnewroom.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 16:26:52 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/04 18:34:34 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

t_room	*ft_lstnewroom(char *name, t_pos pos, t_status status)
{
	t_room *room;

	room = (t_room *)malloc(sizeof(*room));
	if (room == 0)
		return (0);
	else
	{
		room->name = name;
		room->pos = pos;
		room->status = status;
		room->tubes = 0;
		room->visited = 0;
		room->next = 0;
	}
	return (room);
}
