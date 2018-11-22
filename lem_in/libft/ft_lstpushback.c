/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 20:43:43 by emerabet          #+#    #+#             */
/*   Updated: 2017/11/15 21:35:10 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_lstpushback(t_list **begin, void *content, size_t content_size)
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
