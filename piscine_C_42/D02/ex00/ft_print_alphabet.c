/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 16:46:37 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/03 08:55:51 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	ft_print_alphabet(void)
{
	char letter;

	letter = 97;
	while (letter <= 122)
	{
		ft_putchar(letter);
		letter = letter + 1;
	}
}
