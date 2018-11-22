/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 20:27:48 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/03 16:59:48 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print(char a, char b, char c, char d);
void	ft_print2(void);

void	ft_print_comb2(void)
{
	char nu[4];

	nu[0] = 47;
	while (++nu[0] <= 57)
	{
		nu[1] = 47;
		while (++nu[1] <= 57)
		{
			nu[2] = 47;
			while (++nu[2] <= 57)
			{
				nu[3] = 47;
				while (++nu[3] <= 57)
				{
					if ((nu[0] < nu[2]) || (nu[0] == nu[2] && nu[1] < nu[3]))
					{
						ft_print(nu[0], nu[1], nu[2], nu[3]);
						if (!(nu[0] == 57 && nu[1] == 56))
							ft_print2();
					}
				}
			}
		}
	}
}

void	ft_print(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
}

void	ft_print2(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}
