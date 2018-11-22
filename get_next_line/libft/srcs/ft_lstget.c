/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:37:56 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/22 10:57:57 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/libft.h"

t_list	*ft_lstget(t_list **begin, size_t pos)
{
	t_list *tmp;
	size_t i;

	tmp = *begin;
	i = 0;
	while (i < pos - 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
