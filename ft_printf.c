/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <dwilun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:04:49 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/27 09:22:01 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	argl;
	int		i;
	int		count;

	va_start(argl, str);
	i = 0;
	count = 0;
	if (!str || !*str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			count += ft_conv_printf(argl, str[++i]);
		else
		{
			ft_putchar(str[i]);
			count++;
		}
		i++;
	}
	va_end(argl);
	return (count);
}
