/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:49:39 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/14 10:42:13 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int countd;
	int i;

	countd = 0;
	i = 0;
	while (dest[countd])
		countd++;
	while (i < nb)
	{
		dest[countd] = src[i];
		i++;
		countd++;
	}
	dest[countd] = '\0';
	return (dest);
}
