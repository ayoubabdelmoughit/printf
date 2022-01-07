/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:01:21 by aabdelmo          #+#    #+#             */
/*   Updated: 2022/01/05 16:49:01 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(int c, int *step);
void	ft_putstr(char *str, int *step);
void	ft_putnbr(int n, int *step);
void	ft_putnbr_un(unsigned int n, int *step);
void	ft_puthexa(unsigned int n, const char *base, int *step);
void	ft_print_point(unsigned long n, const char *base, int *step);
int		ft_printf(const char *str, ...);

#endif
