/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:09:02 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/12/13 14:15:43 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *step)
{
	int i;
	
	if (!str)
	{
		ft_putstr("(nulle)", step);
		return ;
	}
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], step);
		i++;	
	}
}