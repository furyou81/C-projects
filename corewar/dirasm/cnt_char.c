/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cnt_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 13:30:20 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/05/02 14:22:24 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_corewar.h"

int		cnt_char(char **str, char c)
{
	int i;
	int ret;

	ret = 0;
	i = 0;
	while ((*str)[i])
	{
		if ((*str)[i] == c)
			ret++;
		i++;
	}
	return (ret);
}
