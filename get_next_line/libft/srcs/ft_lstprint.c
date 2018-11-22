/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 20:01:24 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/22 10:58:18 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstprint(t_list **begin)
{
	t_list *tmp;

	tmp = *begin;
	while (tmp)
	{
		ft_putstr((char*)tmp->content);
		ft_putchar('\n');
		tmp = tmp->next;
	}
}
