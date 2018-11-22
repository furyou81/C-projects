/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strangle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 13:56:13 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/26 14:54:24 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

static int	ft_stranglefromtopright(t_game *game)
{
	t_pos	piecepos;
	int		i;
	int		j;

	piecepos = ft_pieceleftup(game);
	ft_befwh(game, piecepos);
	ft_aftwh(game, piecepos);
	i = game->width;
	while (--i >= 0)
	{
		j = -1;
		game->pos.x = i;
		while (++j < game->height)
		{
			game->pos.y = j;
			if (ft_canput(game, piecepos) == 1)
			{
				ft_printf("%d %d\n", j - piecepos.y, i - piecepos.x);
				if (i - piecepos.x <= game->width / 3)
					game->reverse = 1;
				return (1);
			}
		}
	}
	return (-1);
}

static int	ft_stranglefrombottomleft(t_game *game)
{
	t_pos	piecepos;
	int		i;
	int		j;

	piecepos = ft_pieceleftup(game);
	ft_befwh(game, piecepos);
	ft_aftwh(game, piecepos);
	j = game->height;
	while (--j >= 0)
	{
		i = -1;
		game->pos.y = j;
		while (++i < game->width)
		{
			game->pos.x = i;
			if (ft_canput(game, piecepos) == 1)
			{
				ft_printf("%d %d\n", j - piecepos.y, i - piecepos.x);
				if (i - piecepos.x >= game->width / 3)
					game->reverse = 1;
				return (1);
			}
		}
	}
	return (-1);
}

static int	ft_stranglefromleft(t_game *game)
{
	t_pos	piecepos;
	int		i;
	int		j;

	piecepos = ft_pieceleftup(game);
	ft_befwh(game, piecepos);
	ft_aftwh(game, piecepos);
	j = -1;
	while (++j < game->height)
	{
		i = -1;
		game->pos.y = j;
		while (++i < game->width)
		{
			game->pos.x = i;
			if (ft_canput(game, piecepos) == 1)
			{
				ft_printf("%d %d\n", j - piecepos.y, i - piecepos.x);
				if (i - piecepos.x >= game->width / 3)
					game->reverse = 1;
				return (1);
			}
		}
	}
	return (-1);
}

int			ft_strangle(t_game *game)
{
	if (game->direction == RIGHT)
	{
		if (game->reverse == 0)
			return (ft_stranglefromtopright(game));
		else if (game->width > 18)
			return (ft_stranglefrombottomleft(game));
		else
			return (ft_stranglefromleft(game));
	}
	else if (game->direction == LEFT)
	{
		if (game->reverse == 0)
			return (ft_stranglefrombottomleft(game));
		else
			return (ft_stranglefromtopright(game));
	}
	return (0);
}
