/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 11:57:15 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/12/19 11:59:56 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa(unsigned int n, const char *base, int *step)
{
	if (n < 16)
		ft_putchar(base[n], step);
	else
	{
		ft_print_hexa(n / 16, base, step);
		ft_putchar(base[n % 16], step);
	}
}