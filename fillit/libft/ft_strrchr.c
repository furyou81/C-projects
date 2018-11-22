/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 13:55:21 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/15 17:20:57 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ss;
	int			i;

	ss = s;
	i = ft_strlen(ss);
	while (i >= 0)
	{
		if (ss[i] == (char)c)
			return ((void*)ss + i);
		i--;
	}
	return (0);
}
