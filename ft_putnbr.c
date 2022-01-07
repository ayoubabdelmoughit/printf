/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:31:31 by aabdelmo          #+#    #+#             */
/*   Updated: 2022/01/05 17:34:48 by aabdelmo         ###   ########.fr       */
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
	if (n < 0)
	{
		ft_putchar('-', step);
		n *= -1;
	}
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
