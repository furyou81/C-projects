/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 18:12:29 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/05 15:39:50 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

static int		ft_init(t_tube **end, t_tube **toexplore, t_tube **tmp)
{
	if (*end == 0)
		return (0);
	*toexplore = 0;
	*tmp = *end;
	return (1);
}

static int		ft_exploretube(t_tube *ttmp, t_tube *tmp, t_tube **toexplore,
		char *name)
{
	t_tube *next;

	next = ttmp->trooms->tubes;
	while (next)
	{
		if (ft_strcmp(next->trooms->name, name) == 0 && ttmp->trooms->status
				!= OCCUPIED && tmp->trooms->status != START)
			return (1);
		next = next->next;
	}
	ft_pushbacktube(toexplore, ttmp->trooms);
	return (0);
}

static t_room	*ft_retroom(t_anthill *anthill, t_room *room, t_tube *toexplore)
{
	ft_pushbacktrash(&(anthill)->trash, toexplore);
	return (room);
}

static t_room	*ft_retroomb(t_anthill *anthill, t_tube *toexplore, char *name)
{
	ft_pushbacktrash(&(anthill)->trash, toexplore);
	return (ft_nextmove(&toexplore, name, anthill));
}

t_room			*ft_nextmove(t_tube **end, char *name, t_anthill *anthill)
{
	t_tube *toexplore;
	t_tube *tmp;
	t_tube *ttmp;

	if (ft_init(end, &toexplore, &tmp) == 0)
		return (0);
	while (tmp)
	{
		ttmp = tmp->trooms->tubes;
		while (ttmp)
		{
			if (!ttmp->trooms->visited)
			{
				if (ft_strcmp(ttmp->trooms->name, name) == 0 &&
						tmp->trooms->status != OCCUPIED)
					return (ft_retroom(anthill, tmp->trooms, toexplore));
				ttmp->trooms->visited = 1;
				if (ft_exploretube(ttmp, tmp, &toexplore, name))
					return (ft_retroom(anthill, ttmp->trooms, toexplore));
			}
			ttmp = ttmp->next;
		}
		tmp = tmp->next;
	}
	return (ft_retroomb(anthill, toexplore, name));
}
