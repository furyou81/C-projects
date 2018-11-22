/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:13:46 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/08 20:33:27 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putcharout(char c, int out)
{
	write(out, &c, 1);
}

void	ft_putstrout(char *str, int out)
{
	while (*str)
	{
		ft_putcharout(*str++, out);
	}
}
