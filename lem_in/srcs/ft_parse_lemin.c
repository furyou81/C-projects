/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_lemin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 20:12:49 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/14 15:58:43 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

static int		ft_parse(char *line, t_anthill *anthill, t_status status)
{
	int	i;

	i = 0;
	if (ft_countchar(line, ' ') == 2)
	{
		if (line[0] == 'L')
			return (-1);
		if (status == END)
			anthill->hasend = 1;
		else if (status == START)
			anthill->hasstart = 1;
		if (ft_parseroom(line, anthill, status) == -1)
			return (-1);
	}
	else if (ft_countchar(line, '-') == 1)
	{
		if (ft_parsetube(line, anthill) == -1)
			return (-1);
	}
	else
		return (-1);
	return (0);
}

static void		ft_nbantvalid(char *line, t_anthill *anthill)
{
	int	i;

	i = 0;
	while (ft_isdigit(line[i]))
		i++;
	if (line[i])
		ft_error(anthill);
	else
		anthill->nbstart = ft_atoii(line, anthill);
	ft_pushbackparsing(&(anthill)->parsing, line);
	ft_pushbackparsing(&(anthill)->parsing, "\n");
}

static int		ft_checkstartend(int fd, char *line, t_anthill *anthill,
		t_status st)
{
	ft_pushbackparsing(&(anthill)->parsing, line);
	ft_pushbackparsing(&(anthill)->parsing, "\n");
	if (get_next_line(fd, &line))
		while (ft_iscomment(line))
		{
			ft_pushbackparsing(&(anthill)->parsing, line);
			ft_pushbackparsing(&(anthill)->parsing, "\n");
			if (line)
				free(line);
			get_next_line(fd, &line);
		}
	if (ft_parse(line, anthill, st) == -1)
	{
		if (line)
			free(line);
		return (-1);
	}
	if (line)
		free(line);
	return (0);
}

static int		ft_checkmap(t_anthill *anthill, char *line)
{
	if (ft_iscmd(line) == START || ft_iscmd(line) == END)
	{
		if (ft_checkstartend(0, line, anthill, ft_iscmd(line)) == -1)
			return (0);
	}
	else if (ft_iscomment(line) == 0)
	{
		if (ft_parse(line, anthill, FREE) == -1)
			return (0);
	}
	else if (ft_iscomment(line) == 1)
	{
		ft_pushbackparsing(&(anthill)->parsing, line);
		ft_pushbackparsing(&(anthill)->parsing, "\n");
	}
	else if (line[0] != '#')
		return (0);
	else if (line[0] == '#')
	{
		ft_pushbackparsing(&(anthill)->parsing, line);
		ft_pushbackparsing(&(anthill)->parsing, "\n");
	}
	return (1);
}

int				ft_parse_lemin(t_anthill *anthill, char **tt)
{
	char	*line;

	line = 0;
	if (get_next_line(0, &line))
	{
		ft_nbantvalid(line, anthill);
		if (line)
			free(line);
		line = 0;
		while (get_next_line(0, &line))
		{
			*tt = line;
			if (ft_checkmap(anthill, line) == 0)
				return (0);
			if (line)
				free(line);
			line = 0;
			*tt = NULL;
		}
	}
	else
		return (-1);
	return (1);
}
