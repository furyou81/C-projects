/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:16:06 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/22 11:00:12 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/libft.h"

static int		ft_size(int n)
{
	int		i;
	size_t	nb;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		if (n == -2147483648)
			nb = 2147483648;
		else
			nb = -n;
		i++;
	}
	else
		nb = n;
	while (nb >= 1)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static size_t	ft_number(int n)
{
	size_t	nb;

	if (n < 0)
	{
		if (n == -2147483648)
			nb = 2147483648;
		else
			nb = -n;
	}
	else
		nb = n;
	return (nb);
}

void			ft_putnbr_fd(int n, int fd)
{
	char	nb[13];
	int		i;
	size_t	nn;
	int		size;

	nn = ft_number(n);
	size = ft_size(n);
	i = size - 1;
	while (i >= 0)
	{
		nb[i--] = nn % 10 + '0';
		nn /= 10;
	}
	nb[size] = '\0';
	if (n < 0)
		nb[0] = '-';
	i = 0;
	while (nb[i])
		ft_putchar_fd(nb[i++], fd);
}
