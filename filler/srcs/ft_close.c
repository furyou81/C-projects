/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 15:21:49 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/26 14:53:52 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

int			ft_isclosed(t_game *game)
{
	int	i;
	int	j;
	int	count;

	j = -1;
	count = 0;
	while (++j < game->height)
		if (game->map[j][0] == game->player ||
			game->map[j][0] == game->player + 32)
			count++;
	if (count == 0)
		return (-2);
	i = game->width - 1;
	j = -1;
	count = 0;
	while (++j < game->height)
		if (game->map[j][i] == game->player ||
			game->map[j][i] == game->player + 32)
			count++;
	if (count == 0)
		return (-1);
	return (1);
}

static int	ft_isclosedrev(t_game *game)
{
	int	i;
	int	j;
	int	count;

	j = -1;
	count = 0;
	while (++j < game->height)
		if (game->map[j][game->width - 1] == game->player ||
			game->map[j][game->width - 1] == game->player + 32)
			count++;
	if (count == 0)
		return (-1);
	i = 0;
	j = -1;
	count = 0;
	while (++j < game->height)
		if (game->map[j][i] == game->player ||
			game->map[j][i] == game->player + 32)
			count++;
	if (count == 0)
		return (-2);
	return (1);
}

int			ft_close(t_game *game)
{
	int	closed;

	if (game->direction == RIGHT)
		closed = ft_isclosedrev(game);
	else
		closed = ft_isclosed(game);
	if (closed == 1)
	{
		game->action = STRANGLE;
		return (1);
	}
	else if (closed == -2)
	{
		game->pos = ft_findinheightrev(game, game->player);
		return (ft_closeleft(game));
	}
	else if (closed == -1)
	{
		game->pos = ft_findinheight(game, game->player);
		return (ft_closeright(game));
	}
	return (0);
}
