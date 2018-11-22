/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:24:48 by emerabet          #+#    #+#             */
/*   Updated: 2017/11/15 17:31:49 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s1;
	size_t		len;
	char		cc;

	s1 = s;
	cc = c;
	len = ft_strlen(s);
	while (s1[len] != cc && len != 0)
		len--;
	if (s1[len] == cc)
		return (char *)(s1 + len);
	return (NULL);
}
