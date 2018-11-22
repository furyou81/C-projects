/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:03:47 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/08 11:06:38 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int a;
	int count;

	a = 1;
	count = 0;
	while (str[count])
		count++;
	if (count == 0)
		return (1);
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			a = 0;
		str++;
	}
	return (a);
}
