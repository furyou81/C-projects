/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 13:16:09 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/15 17:19:05 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_size(int n)
{
	int		size;
	size_t	nb;

	size = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
	{
		size = 1;
		nb = 2147483648;
	}
	else if (n < 0)
	{
		nb = -1 * n;
		size = 1;
	}
	else
		nb = n;
	while (nb >= 1)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

static void	ft_setnb(int n, size_t *nbb, int *neg)
{
	*neg = 0;
	if (n == -2147483648)
	{
		*neg = 1;
		*nbb = 2147483648;
	}
	else if (n < 0)
	{
		*neg = 1;
		*nbb = -1 * n;
	}
	else
		*nbb = n;
}

char		*ft_itoa(int n)
{
	int		size;
	char	*nb;
	int		i;
	int		neg;
	size_t	nbb;

	size = ft_size(n);
	nb = ft_strnew(size);
	if (nb == NULL)
		return (NULL);
	ft_setnb(n, &nbb, &neg);
	i = size - 1;
	while (i >= 0)
	{
		nb[i--] = nbb % 10 + '0';
		nbb /= 10;
	}
	if (neg == 1)
		nb[0] = '-';
	nb[size + 1] = '\0';
	return (nb);
}
