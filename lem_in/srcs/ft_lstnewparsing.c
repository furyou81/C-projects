/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnewparsing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 15:07:20 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/04 15:12:20 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

t_parsing	*ft_lstnewparsing(char *p)
{
	t_parsing *new;

	new = (t_parsing *)malloc(sizeof(*new));
	if (new == 0)
		return (0);
	else
	{
		new->toprint = ft_strdup(p);
		new->next = 0;
	}
	return (new);
}
