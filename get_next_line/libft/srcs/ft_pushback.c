/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:22:26 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/22 10:58:45 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/libft.h"

void	ft_pushback(t_list **begin, void *content, size_t content_size)
{
	t_list *new;

	new = *begin;
	if (new)
	{
		while (new->next)
			new = new->next;
		new->next = ft_lstnew(content, content_size);
	}
	else
		*begin = ft_lstnew(content, content_size);
}
