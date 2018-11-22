/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addants.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 16:24:49 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/02 20:00:07 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

void	ft_addants(t_anthill *anthill)
{
	int i;

	i = 1;
	while (i <= anthill->nbstart)
	{
		ft_pushbackant(&(anthill)->ants, i, anthill->start);
		i++;
	}
}
