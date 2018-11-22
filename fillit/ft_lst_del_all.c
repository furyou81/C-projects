/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_del_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 11:34:59 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/20 12:17:00 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void	ft_lst_del_all(t_tris **lst)
{
	t_tris *tmp;
	t_tris *todel;

	tmp = *lst;
	while (tmp != NULL)
	{
		todel = tmp;
		tmp = tmp->next;
		todel->letter = 0;
		todel->next = NULL;
		free(todel);
	}
	*lst = NULL;
}
