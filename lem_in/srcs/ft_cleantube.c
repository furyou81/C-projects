/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cleantube.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 15:51:46 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/05 15:52:28 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

void	ft_cleantube(t_tube **tubes)
{
	t_tube *tmp;
	t_tube *previous;

	tmp = *tubes;
	while (tmp)
	{
		previous = tmp;
		tmp = tmp->next;
		free(previous);
		previous = 0;
	}
	*tubes = 0;
}
