/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraytolst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:44:35 by emerabet          #+#    #+#             */
/*   Updated: 2017/11/15 21:35:55 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

t_list		*ft_arraytolst(char **arr)
{
	t_list	*list;
	int		i;

	list = NULL;
	i = 0;
	while (arr[i])
	{
		ft_lstpushback(&list, arr[i], ft_strlen(arr[i]));
		i++;
	}
	return (list);
}
