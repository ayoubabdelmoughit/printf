/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:59:28 by aabdelmo          #+#    #+#             */
/*   Updated: 2022/01/06 11:28:27 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int n, const char *base, int *step)
{
	if (n < 16)
		ft_putchar(base[n], step);
	else
	{
		ft_puthexa(n / 16, base, step);
		ft_putchar(base[n % 16], step);
	}
}
