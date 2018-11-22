/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 22:32:46 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/10 22:54:31 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if ((i < j && i > k) || (i > j && i < k))
		return (i);
	else if ((j < i && j > k) || (j > i && j < k))
		return (j);
	else if ((k < i && k > j) || (k > i && k < j))
		return (k);
	else if (i == j)
		return (j);
	else if (j == k)
		return (j);
	else if (i == k)
		return (i);
	return (0);
}
