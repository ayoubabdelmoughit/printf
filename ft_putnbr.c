/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:16:11 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/12/13 14:30:39 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *step)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*step = *step + 11;
		return ;
	}
	if(n < 0)
	{
		ft_putchar('-', step);
		n *= -1;
	}
	if (n >= 0 && n < 10)
	{
		ft_putchar(n + '0', step);
	}
	else
	{
		ft_putnbr(n / 10, step);
		ft_putchar((n % 10) + '0', step);
	}
}