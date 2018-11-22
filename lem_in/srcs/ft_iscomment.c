/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscomment.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 17:09:34 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/06 19:18:09 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

int		ft_iscomment(char *line)
{
	int i;

	if (ft_strcmp(line, "##start") == 0 || ft_strcmp(line, "##end") == 0)
		return (0);
	i = ft_strlen(line);
	if (i > 1)
	{
		if (line[0] == '#' && line[1] == '#')
			return (2);
		else if (line[0] == '#')
			return (1);
	}
	return (0);
}
