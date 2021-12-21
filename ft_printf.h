/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:01:21 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/12/21 09:22:17 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(int c, int *step);
void	ft_putstr(char *str, int *step);
void	ft_putnbr(int n, int *step);
void	ft_putnbr_un(unsigned int n, int *step);
void	ft_print_hexa(unsigned int n, const char *base, int *step);
void	ft_print_point(unsigned long n, const char *base, int *step);

# endif