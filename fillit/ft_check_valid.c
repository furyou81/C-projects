/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wael-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 20:26:49 by wael-bou          #+#    #+#             */
/*   Updated: 2018/07/09 20:26:51 by wael-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

static int	ft_valid_char(char c)
{
	if (c == '.' || c == '#' || c == '\n')
		return (1);
	else
		return (0);
}

static int	ft_is_piece_valid(char *s, int pos)
{
	int i;
	int res;

	res = 0;
	i = pos - 20 + 1;
	while (i < pos)
	{
		if (s[i] == '#')
		{
			res = ft_check_piece(s, i, pos);
			break ;
		}
		i++;
	}
	return (res);
}

static int	ft_manage_pieces(int *htag, char *input, t_tris **lst, int ilchp[5])
{
	if (*htag != 4)
		return (-1);
	*htag = 0;
	if (ft_is_piece_valid(input, ilchp[0]) == 1)
	{
		ilchp[4] = ilchp[4] + 1;
		ft_lst_add(lst, ft_strsub(input, ilchp[0] - 20 + 1, 20));
	}
	else
	{
		ft_lst_del_all(lst);
		return (-1);
	}
	return (0);
}

static void	ft_init_var(int ilchp[5])
{
	ilchp[0] = 0;
	ilchp[1] = 1;
	ilchp[2] = 0;
	ilchp[3] = 0;
	ilchp[4] = 0;
}

int			ft_check_valid(t_context *ctx, char *input, t_tris **lst)
{
	int ilchp[5];

	ft_init_var(ilchp);
	while (input[ilchp[0]])
	{
		if (ft_valid_char(input[ilchp[0]]) == 0)
			return (-1);
		ilchp[3] = (input[ilchp[0]] == '#') ? ilchp[3] + 1 : ilchp[3];
		ilchp[1] = (input[ilchp[0]] == '\n') ? ilchp[1] + 1 : ilchp[1];
		if (ilchp[1] % 5 == 0 && input[ilchp[0]] != '\n')
			return (-1);
		else if (ilchp[1] % 5 == 0)
			if (ft_manage_pieces(&ilchp[3], input, lst, ilchp) == -1)
				return (-1);
		if (ilchp[2] == 4 && ilchp[1] % 5 != 0)
		{
			if (input[ilchp[0]] != '\n')
				return (-1);
			ilchp[2] = -1;
		}
		ilchp[2]++;
		ilchp[0]++;
	}
	ctx->maxpiece = ilchp[4];
	return ((ilchp[1]) % 5 != 0 && ilchp[1] != 6) ? -1 : 0;
}
