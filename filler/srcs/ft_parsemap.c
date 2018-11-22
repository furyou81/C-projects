/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsemap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 11:11:43 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/26 15:11:26 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

static void	ft_initmap(t_game *game, char *firstline)
{
	game->height = ft_atoi(firstline + 8);
	game->width = ft_atoi(firstline + 11);
	game->map = (char **)malloc(sizeof(char*) * game->height + 1);
	game->map[game->height] = 0;
}

static void	ft_initpiece(t_game *game, char *defpiece)
{
	game->hp = ft_atoi(defpiece + 6);
	game->wp = ft_atoi(defpiece + 8);
	game->piece = (char **)malloc(sizeof(char*) * game->hp + 1);
	game->piece[game->hp] = 0;
}

static int	ft_firststep(t_game *game, int i, char *line)
{
	if (i == 0)
		ft_initmap(game, line);
	else if (i > 1 && i < game->height + 2)
		ft_fillmap(game, line, i);
	else if (i == game->height + 2)
		ft_initpiece(game, line);
	else if (i > game->height + 2)
	{
		game->piece[i - game->height - 3] = ft_strdup(line);
		if (i == game->height + 2 + game->hp)
		{
			game->init = 1;
			return (-1);
		}
	}
	return (1);
}

static int	ft_secondstep(t_game *game, int i, char *line)
{
	if (i > 1 && i < game->height + 2)
		ft_strcpy(game->map[i - 2], line + game->nnb);
	else if (i == game->height + 2)
		ft_initpiece(game, line);
	else if (i > game->height + 2)
	{
		game->piece[i - game->height - 3] = ft_strdup(line);
		if (i == game->height + 2 + game->hp)
			return (-1);
	}
	return (1);
}

void		ft_parsemap(t_game *game)
{
	char	*line;
	int		i;

	i = 0;
	line = 0;
	while (get_next_line(0, &line))
	{
		if (game->init == 0)
		{
			if (ft_firststep(game, i, line) == -1)
				break ;
		}
		else
		{
			if (ft_secondstep(game, i, line) == -1)
				break ;
		}
		i++;
		free(line);
		line = 0;
	}
	if (line)
		free(line);
	ft_wh(game);
}
