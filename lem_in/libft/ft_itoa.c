/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 11:16:47 by emerabet          #+#    #+#             */
/*   Updated: 2017/11/15 17:21:18 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void		ft_fill_tab(int size, char *str, int n, int has_minus)
{
	unsigned int nb;

	nb = 0;
	if (has_minus == 1)
	{
		nb = n * -1;
		str[0] = '-';
	}
	else
		nb = n;
	while (size >= (0 + has_minus))
	{
		str[size] = nb % 10 + '0';
		nb = nb / 10;
		size--;
	}
}

char			*ft_itoa(int n)
{
	int		size;
	int		nb;
	char	*str;
	int		has_minus;

	size = 1;
	has_minus = 0;
	nb = n;
	while (nb /= 10)
		size++;
	has_minus = (n < 0) ? 1 : 0;
	str = ft_strnew(size + has_minus);
	if (str != NULL)
	{
		str[size + has_minus] = '\0';
		size = size + has_minus - 1;
		ft_fill_tab(size, str, n, has_minus);
	}
	return (str);
}
