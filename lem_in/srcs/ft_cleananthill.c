/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cleananthill.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 18:37:51 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/06 17:07:06 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

static void	ft_cleanroom(t_room **rooms)
{
	t_room *tmp;
	t_room *previous;

	tmp = *rooms;
	while (tmp)
	{
		previous = tmp;
		free(tmp->name);
		tmp->name = 0;
		ft_cleantube(&(tmp)->tubes);
		free(tmp->tubes);
		tmp->tubes = 0;
		tmp = tmp->next;
		free(previous);
		previous = 0;
	}
}

static void	ft_cleanparsing(t_parsing **parsing)
{
	t_parsing *tmp;
	t_parsing *previous;

	tmp = *parsing;
	while (tmp)
	{
		previous = tmp;
		free(tmp->toprint);
		tmp->toprint = 0;
		tmp = tmp->next;
		free(previous);
		previous = 0;
	}
}

static void	ft_cleanant(t_ant **ants)
{
	t_ant *tmp;
	t_ant *previous;

	tmp = *ants;
	while (tmp)
	{
		previous = tmp;
		tmp = tmp->next;
		free(previous);
		previous = 0;
	}
}

static void	ft_cleantrash(t_trash **trash)
{
	t_trash *tmp;
	t_trash *previous;

	tmp = *trash;
	while (tmp)
	{
		ft_cleantube(&(tmp)->tubes);
		previous = tmp;
		tmp = tmp->next;
		free(previous);
		previous = 0;
	}
	*trash = 0;
}

void		ft_cleananthill(t_anthill *anthill)
{
	ft_cleanroom(&(anthill)->rooms);
	ft_cleanparsing(&(anthill)->parsing);
	ft_cleantrash(&(anthill)->trash);
	ft_cleanant(&(anthill)->ants);
}
