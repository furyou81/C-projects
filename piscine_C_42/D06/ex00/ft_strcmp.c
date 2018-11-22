/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 21:15:27 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/08 19:44:49 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int size1;
	int size2;

	size1 = 0;
	size2 = 0;
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	if (size1 == 0 && size2 > 0)
		return (-s2[0]);
	if (size2 == 0 && size1 > 0)
		return (s1[0]);
	size1 = 0;
	while (s1[size1])
	{
		if (s1[size1] < s2[size1] || s1[size1] > s2[size1])
			return (s1[size1] - s2[size1]);
		size1++;
	}
	if (size1 < size2)
		return (-s2[size1]);
	return (0);
}
