/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_haslive.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 11:14:49 by lfujimot          #+#    #+#             */
/*   Updated: 2018/04/27 11:42:46 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_corewar.h"

int			ft_haslive(char **argv, int key)
{
	if (ft_strcmp(argv[key], "-live") != 0)
		return (-1);
	return (1);
}
