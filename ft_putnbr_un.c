/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:50:33 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/12/16 12:54:12 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void	ft_putnbr_un(unsigned int n, int *step)
{
	if (n < 10)
		ft_putchar(n + '0', step);
		else
	{
		ft_putnbr(n / 10, step);
		ft_putchar((n % 10) + '0', step);
	}
}