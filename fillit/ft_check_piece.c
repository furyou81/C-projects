/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_piece.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wael-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 20:26:31 by wael-bou          #+#    #+#             */
/*   Updated: 2018/07/09 20:26:32 by wael-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

int	ft_check_piece(char *s, int pos, int const end)
{
	int res;

	res = 0;
	while (pos <= end)
	{
		if (s[pos] == '#')
		{
			if (s[pos + 1] == '#')
				res++;
			if (s[pos + 5] == '#')
				res++;
			if (s[pos - 1] == '#')
				res++;
			if (s[pos - 5] == '#')
				res++;
		}
		pos++;
		if (res >= 6)
			return (1);
	}
	return ((res >= 6) ? 1 : 0);
}
