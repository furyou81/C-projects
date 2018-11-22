/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wh.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 17:47:44 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/22 17:54:45 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

static void	ft_w(t_game *game)
{
	int	i;
	int test;
	int j;
	int counti;

	counti = 0;
	i = -1;
	while (++i < game->wp)
	{
		test = 0;
		j = -1;
		while (++j < game->hp)
		{
			if (game->piece[j][i] == '*')
			{
				if (test == 0)
				{
					counti++;
					test = 1;
				}
			}
		}
	}
	game->w = counti;
}

void		ft_wh(t_game *game)
{
	int	i;
	int j;
	int countj;
	int	test;

	countj = 0;
	j = -1;
	while (++j < game->hp)
	{
		test = 0;
		i = -1;
		while (++i < game->wp)
		{
			if (game->piece[j][i] == '*')
			{
				if (test == 0)
				{
					countj++;
					test = 1;
				}
			}
		}
	}
	game->h = countj;
	ft_w(game);
}
