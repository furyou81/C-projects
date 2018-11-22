/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:30:44 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/08 12:02:07 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int countd;
	int counts;
	int i;

	countd = 0;
	counts = 0;
	i = 0;
	while (dest[countd])
		countd++;
	while (src[counts])
		counts++;
	while (i < counts)
	{
		dest[countd + i] = src[i];
		i++;
	}
	dest[countd + counts] = '\0';
	return (dest);
}
