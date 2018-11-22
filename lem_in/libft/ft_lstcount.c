/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:28:12 by emerabet          #+#    #+#             */
/*   Updated: 2017/11/16 14:41:14 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t		ft_lstcount(t_list **alst)
{
	t_list	*current;
	size_t	count;

	current = *alst;
	count = 0;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
