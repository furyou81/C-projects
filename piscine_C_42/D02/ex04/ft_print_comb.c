/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 18:26:39 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/02 21:30:58 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char number[3];

	number[0] = '/';
	while (++number[0] <= '9')
	{
		number[1] = '0';
		while (++number[1] <= '9')
		{
			number[2] = '0';
			while (++number[2] <= '9')
			{
				if (number[0] < number[1] && number[1] < number[2])
				{
					ft_putchar(number[0]);
					ft_putchar(number[1]);
					ft_putchar(number[2]);
					if (number[0] != '7')
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
				}
			}
		}
	}
}
