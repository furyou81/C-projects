/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 13:44:28 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/15 17:17:28 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *new;
	t_list *newnext;

	if (lst != NULL)
	{
		tmp = lst;
		new = (*f)(ft_lstnew(tmp->content, tmp->content_size));
		new->next = NULL;
		newnext = new;
		tmp = tmp->next;
		while (tmp != NULL)
		{
			newnext->next = (*f)(ft_lstnew(tmp->content, tmp->content_size));
			newnext = newnext->next;
			tmp = tmp->next;
		}
	}
	else
		new = NULL;
	return (new);
}
