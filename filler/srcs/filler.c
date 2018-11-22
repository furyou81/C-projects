/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 12:57:08 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/26 15:04:42 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

static void	ft_parseplayer(t_game *game)
{
	char	*line;

	line = 0;
	get_next_line(0, &line);
	if (line)
	{
		line[11] = '\0';
		if (ft_strcmp(line + 9, "p1") == 0)
		{
			free(line);
			game->opp = 'X';
			game->player = 'O';
		}
		else if (ft_strcmp(line + 9, "p2") == 0)
		{
			free(line);
			game->opp = 'O';
			game->player = 'X';
		}
		else
		{
			ft_printf("player wrong format");
			free(line);
		}
	}
}

static void	ft_initgame(t_game *game)
{
	game->player = 0;
	game->opp = 0;
	game->map = 0;
	game->width = 0;
	game->height = 0;
	game->piece = 0;
	game->direction = DEFAULT;
	game->nnb = 0;
	game->wp = 0;
	game->hp = 0;
	game->w = 0;
	game->h = 0;
	game->befw = 0;
	game->befh = 0;
	game->aftw = 0;
	game->afth = 0;
	game->init = 0;
	game->pos.x = 0;
	game->pos.y = 0;
	game->reverse = 0;
	game->count = 0;
	game->action = CUT;
}

int			main(void)
{
	t_game	game;
	t_pos	pos;

	ft_initgame(&game);
	while (1)
	{
		if (game.player == 0)
			ft_parseplayer(&game);
		else
		{
			ft_parsemap(&game);
			pos = ft_findpos(&game);
			if (ft_putpiece(&game) == -1)
			{
				ft_printf("0 0\n");
				break ;
			}
		}
		if (game.piece)
			ft_cleanmap(game.piece);
	}
	ft_cleanmap(game.map);
	return (0);
}
