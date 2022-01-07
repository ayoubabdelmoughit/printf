/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:04:38 by aabdelmo          #+#    #+#             */
/*   Updated: 2022/01/05 17:39:00 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *step)
{
	int	i;

	if (!str)
	{
		ft_putstr("(null)", step);
		return ;
	}
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i], step);
		i++;
	}
}
