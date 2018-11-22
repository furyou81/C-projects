/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 11:12:56 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/15 17:16:49 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*todel;

	tmp = *alst;
	while (tmp != NULL)
	{
		todel = tmp;
		tmp = tmp->next;
		(*del)(todel->content, todel->content_size);
		free(todel);
	}
	*alst = NULL;
}
