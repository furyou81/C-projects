/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_grille.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 13:50:38 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/19 16:57:11 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void	ft_init_grille(char *grille, int max)
{
	int i;

	i = 0;
	while (i < max * (max + 1))
	{
		if (i % (max + 1) == max && i > 1)
			grille[i] = '\n';
		else
		{
			grille[i] = '.';
		}
		i++;
	}
}
