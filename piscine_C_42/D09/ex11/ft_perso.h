/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:12:39 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/11 12:41:40 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__FT_STRING_H__
#include <string.h>

#endif
#define SAVE_THE_WORLD "agent secret"

typedef struct	s_perso
{
	char	*name;
	double	life;
	int		age;
	char	*profession;
}				t_perso;
