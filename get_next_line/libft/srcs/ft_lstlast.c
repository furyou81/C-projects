/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:54:31 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/22 10:58:29 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstlast(t_list **begin)
{
	t_list *tmp;

	tmp = *begin;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
