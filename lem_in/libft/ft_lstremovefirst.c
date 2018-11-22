/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremovefirst.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:28:02 by emerabet          #+#    #+#             */
/*   Updated: 2017/11/15 20:06:44 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstremovefirst(t_list **alst)
{
	t_list	*next;

	if (*alst != NULL)
	{
		next = (*alst)->next;
		free(*alst);
		*alst = next;
	}
}
