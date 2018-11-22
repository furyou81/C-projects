/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushbackparsing.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 15:12:33 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/04 16:06:06 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

void	ft_pushbackparsing(t_parsing **parsing, char *line)
{
	t_parsing *new;

	new = *parsing;
	if (new)
	{
		while (new->next)
			new = new->next;
		if (new)
			new->next = ft_lstnewparsing(line);
	}
	else
		*parsing = ft_lstnewparsing(line);
}
