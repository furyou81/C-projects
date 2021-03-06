/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 13:05:19 by emerabet          #+#    #+#             */
/*   Updated: 2017/11/12 13:43:26 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	if (s != NULL && f != NULL)
	{
		i = 0;
		while (s[i])
		{
			f(s + i);
			i++;
		}
	}
}
