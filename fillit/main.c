/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:37:57 by lfujimot          #+#    #+#             */
/*   Updated: 2018/07/09 20:24:47 by wael-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

static void	ft_open_file(t_tris **lst, int fd)
{
	char		*input;
	t_context	*ctx;

	input = ft_read_input(fd);
	ctx = (t_context *)malloc(sizeof(*ctx));
	if (ctx != NULL)
	{
		if (ft_check_valid(ctx, input, lst) == -1)
			ft_error();
		else
		{
			ctx->grille = ft_strnew(52 * 52 + 1);
			close(fd);
			ctx->size = 2;
			ft_init_grille(ctx->grille, ctx->size);
			while (ft_solve(ctx, *lst, 0) == 0)
				ft_init_grille(ctx->grille, ++ctx->size);
			ft_putstr(ctx->grille);
			free(ctx->grille);
			ctx->grille = NULL;
			free(ctx);
			ctx = NULL;
		}
	}
}

int			main(int argc, char **argv)
{
	t_tris	*lst;
	int		fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			ft_usage();
		else
			ft_open_file(&lst, fd);
	}
	else
		ft_usage();
	return (0);
}
