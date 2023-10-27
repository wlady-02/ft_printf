/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <dwilun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:31:23 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/25 17:21:01 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conv_printf(va_list argl, int c)
{
	int	i;

	if (c == 'c')
		i = ft_putchar((int)va_arg(argl, int));
	else if (c == 's')
		i = ft_putstr(va_arg(argl, char *));
	else if (c == 'p')
		i = ft_putptr(va_arg(argl, void *), "0123456789abcdef");
	else if (c == 'd' || c == 'i')
		i = ft_putnbr(va_arg(argl, int));
	else if (c == 'u')
		i = ft_putnbr_b(va_arg(argl, unsigned int), "0123456789", 10);
	else if (c == 'x')
		i = ft_putnbr_b(va_arg(argl, unsigned int), "0123456789abcdef", 16);
	else if (c == 'X')
		i = ft_putnbr_b(va_arg(argl, unsigned int), "0123456789ABCDEF", 16);
	else if (c == '%')
		i = ft_putchar('%');
	else
		i = 0;
	return (i);
}
