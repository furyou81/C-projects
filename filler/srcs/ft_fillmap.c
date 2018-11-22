/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:09:37 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/26 15:13:57 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

void	ft_fillmap(t_game *game, char *line, int i)
{
	int	j;

	j = 1;
	if (i == 2)
	{
		while (ft_isdigit(line[j]))
			j++;
		game->nnb = j + 1;
	}
	game->map[i - 2] = ft_strdup(line + game->nnb);
}
