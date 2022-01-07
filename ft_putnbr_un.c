/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 12:59:03 by aabdelmo          #+#    #+#             */
/*   Updated: 2022/01/05 17:35:38 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_un(unsigned int n, int *step)
{
	if (n < 10)
	{
		ft_putchar(n + '0', step);
	}
	else
	{
		ft_putnbr(n / 10, step);
		ft_putchar(n % 10 + '0', step);
	}
}
