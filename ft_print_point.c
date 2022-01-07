/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:02:09 by aabdelmo          #+#    #+#             */
/*   Updated: 2022/01/05 17:26:39 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_point(unsigned long n, const char *base, int *step)
{
	if (n >= 16)
		ft_print_point(n / 16, base, step);
	ft_putchar(base[n % 16], step);
}
