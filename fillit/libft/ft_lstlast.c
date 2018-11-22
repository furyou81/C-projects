/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:54:31 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/15 20:01:15 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
