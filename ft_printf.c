/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:34:08 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/12/21 11:49:50 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_cal_printf(va_list arg, int i, int *sp, const char *str)
{
	i++;
	if (str[i] == 's')
		ft_putstr(va_arg(arg, char *), sp);
	if (str[i] == 'c')
		ft_putchar(va_arg(arg, int), sp);
	if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr(va_arg(arg, int), sp);
	if (str[i] == 'u')
		ft_putnbr_un(va_arg(arg, int), sp);
	if (str[i] == '%')
		ft_putchar('%', sp);
	if (str[i] == 'x')
		ft_print_hexa(va_arg(arg, unsigned long), "0123456789abcdef", sp);
	if (str[i] == 'X')
		ft_print_hexa(va_arg(arg, unsigned long), "0123456789ABCDEF", sp);
	if (str[i] == 'p')
	{
		ft_putstr("0x", sp);
		ft_print_point(va_arg(arg, unsigned long), "0123456789abcdef", sp);
	}
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		sp;
	va_list	arg;

	i = 0;
	sp = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i], &sp);
		else
		{
			ft_cal_printf(arg, i, &sp, str);
			i++;
		}
		i++;
	}
	va_end(arg);
	return (sp);
}
