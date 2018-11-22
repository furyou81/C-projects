/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_color.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 13:21:46 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 15:40:04 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

void	ft_print_color(char *str)
{
	if (ft_strcmp(str, "pa") == 0)
		ft_printf(RED "%s\n" RESET, str);
	else if (ft_strcmp(str, "pb") == 0)
		ft_printf(BLUE "%s\n" RESET, str);
	else if (ft_strcmp(str, "ra") == 0)
		ft_printf(GREEN "%s\n" RESET, str);
	else if (ft_strcmp(str, "rb") == 0)
		ft_printf(YELLOW "%s\n" RESET, str);
	else if (ft_strcmp(str, "rr") == 0)
		ft_printf(MAGENTA "%s\n" RESET, str);
	else if (ft_strcmp(str, "rrr") == 0)
		ft_printf(UNDER "%s\n" RESET, str);
	else if (ft_strcmp(str, "rra") == 0)
		ft_printf(ITAL "%s\n" RESET, str);
	else if (ft_strcmp(str, "rrab") == 0)
		ft_printf(GREY "%s\n" RESET, str);
	else if (ft_strcmp(str, "sa") == 0)
		ft_printf(COLOR "%s\n" RESET, str);
	else if (ft_strcmp(str, "sb") == 0)
		ft_printf(COLORR "%s\n" RESET, str);
	else if (ft_strcmp(str, "ss") == 0)
		ft_printf(COLORRR "%s\n" RESET, str);
}
