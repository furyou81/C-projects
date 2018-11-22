/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 21:37:15 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/09 08:28:09 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				count[2];
	unsigned int	i;

	count[0] = 0;
	count[1] = 0;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[count[0]])
		count[0]++;
	while (s2[count[1]])
		count[1]++;
	if (count[0] == 0 && count[1] > 0)
		return (-s2[0]);
	if (count[1] == 0 && count[0] > 0)
		return (s1[0]);
	while (i < n)
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (count[0] < count[1])
		return (-s2[i]);
	return (0);
}
