/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:41:27 by emerabet          #+#    #+#             */
/*   Updated: 2017/11/16 14:55:13 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_lstprint(t_list *list)
{
	t_list	*current;
	char	*str;

	current = list;
	while (current)
	{
		str = (char *)current->content;
		ft_putendl(str);
		current = current->next;
	}
}
