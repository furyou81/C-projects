/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnewtube.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 16:21:56 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/04 17:28:27 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

t_tube	*ft_lstnewtube(t_room *room)
{
	t_tube *tube;

	tube = (t_tube *)malloc(sizeof(*tube));
	if (tube == 0)
		return (0);
	else
	{
		tube->trooms = room;
		tube->next = 0;
	}
	return (tube);
}
