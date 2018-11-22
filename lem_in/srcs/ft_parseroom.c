/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parseroom.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 15:13:42 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/05 14:57:32 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

static int		ft_contains_room(t_room **rooms, char *name)
{
	t_room	*tmp;
	int		i;

	i = 0;
	while (name[i])
	{
		if (name[i] == '-')
			return (1);
		i++;
	}
	tmp = *rooms;
	while (tmp)
	{
		if (ft_strcmp(tmp->name, name) == 0)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int				ft_parseroom(char *line, t_anthill *anthill, t_status status)
{
	char	**tab;
	int		i;
	t_pos	pos;

	if (anthill->nbtubes != 0)
		return (-1);
	i = 0;
	while (line[i] && line[i] != ' ')
		i++;
	while (line[i])
	{
		if (!(ft_isdigit(line[i]) || line[i] == ' '))
			ft_error(anthill);
		i++;
	}
	tab = ft_strsplit(line, ' ');
	pos.x = ft_atoii(tab[1], anthill);
	pos.y = ft_atoii(tab[2], anthill);
	if (ft_contains_room(&(anthill)->rooms, tab[0]))
		ft_error(anthill);
	ft_pushbackroom(&(anthill)->rooms, ft_strdup(tab[0]), pos, status);
	ft_pushbackparsing(&(anthill)->parsing, line);
	ft_pushbackparsing(&(anthill)->parsing, "\n");
	ft_freetab(tab);
	return (1);
}
