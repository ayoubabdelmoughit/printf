/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:58:08 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/12/21 11:18:46 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_point(unsigned long n, const char *base, int *step)
{
	if (n >= 16)
		ft_print_point(n / 16, base, step);
	ft_putchar(base[n % 16], step);
}
