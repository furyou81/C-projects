/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 20:52:15 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/15 21:37:15 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

t_list	*ft_arraylst(char **tab)
{
	size_t i;
	t_list *lst;

	i = 0;
	while (tab[i])
	{
		ft_pushback(&lst, tab[i], ft_strlen(tab[i]));
		i++;
	}
	return (lst);
}
