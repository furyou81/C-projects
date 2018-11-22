/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 11:58:42 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/20 15:27:59 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

static int	ft_freespace(char *grille, int pos, int size, t_tris *piece)
{
	int i;
	int c;

	i = 0;
	while (i < 4)
	{
		if (piece->coord[i] >= 15)
			c = pos + piece->coord[i] + (size - 4) * 3;
		else if (piece->coord[i] >= 9)
			c = pos + piece->coord[i] + (size - 4) * 2;
		else if (piece->coord[i] >= 4 ||
				(piece->coord[i] == 3 && i == 1 && piece->coord[0] == 0))
			c = pos + piece->coord[i] + (size - 4) * 1;
		else
			c = pos + piece->coord[i];
		if (grille[c] != '.')
			return (-1);
		i++;
	}
	return (1);
}

static void	ft_put_piece(char *grille, t_tris *piece, int pos, int size)
{
	int i;
	int c;

	i = 0;
	while (i < 4)
	{
		if (piece->coord[i] >= 15)
			c = pos + piece->coord[i] + (size - 4) * 3;
		else if (piece->coord[i] >= 9)
			c = pos + piece->coord[i] + (size - 4) * 2;
		else if (piece->coord[i] >= 4 || (piece->coord[i] >= 3 &&
					i == 1 && piece->coord[0] == 0))
			c = pos + piece->coord[i] + (size - 4) * 1;
		else
			c = pos + piece->coord[i];
		grille[c] = piece->letter;
		i++;
	}
}

static void	ft_remove_last(char *grille, t_tris *piece, int pos, int size)
{
	int i;
	int c;

	i = 0;
	while (i < 4)
	{
		if (piece->coord[i] >= 15)
			c = pos + piece->coord[i] + (size - 4) * 3;
		else if (piece->coord[i] >= 9)
			c = pos + piece->coord[i] + (size - 4) * 2;
		else if (piece->coord[i] >= 4 || (piece->coord[i] >= 3 &&
					i == 1 && piece->coord[0] == 0))
			c = pos + piece->coord[i] + (size - 4) * 1;
		else
			c = pos + piece->coord[i];
		grille[c] = '.';
		i++;
	}
}

int			ft_solve(t_context *ctx, t_tris *piece, int pos)
{
	if (piece == NULL)
		return (1);
	pos = 0;
	while (pos < ctx->size * (ctx->size + 1))
	{
		while (ctx->grille[pos] != '.' && ctx->grille[pos] != '\0')
			pos++;
		if (ft_freespace(ctx->grille, pos, ctx->size,
			piece) == 1)
		{
			ft_put_piece(ctx->grille, piece,
						pos, ctx->size);
			if (ft_solve(ctx, piece->next, pos) != 0)
				return (1);
			else
				(ft_remove_last(ctx->grille, piece,
				pos, ctx->size));
		}
		pos++;
	}
	return (0);
}
