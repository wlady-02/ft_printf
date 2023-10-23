/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:04:49 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/23 16:49:43 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "libft.h"

int ft_printf(const char *str, ...);

int main() {
    int numero = 42;
    char carattere = 'C';

    // Test della tua funzione ft_printf
    ft_printf("Un numero: %d, un valore a virgola mobile: %d, un carattere: %c\n", numero, carattere);

    return 0;
}
int fd = 1;

int	ft_printf(const char *str, ...)
{
	va_list	argl;
	va_start(argl, str);
	int	i;
	char arg;
		
	i = 0;
	while (str[i] != '\0' && str[i] != '%')
	{
		write(fd,&str[i], 1);
		i++;
	}
	i++;
	if (str[i] == 'c')
	{	
		arg = va_arg(argl,char);
		write(fd, &arg, 1);
	}
	else if (str[i] == 's')
	{
		arg = va_arg(argl,char *);
		write(fd, "s", 1);
	}
	else if (str[i] == 'p')
	{
		arg = va_arg(argl,void *);
		write(fd, "p", 1);
	}
	else if (str[i] == 'd')
	{
		arg = va_arg(argl,int);
		write(fd, "\nd", 1);
	}
	else if (str[i] == 'i')
	{
		arg = va_arg(argl,int);
		write(fd, "i", 1);
	}
	else if (str[i] == 'u')
	{
		arg = va_arg(argl,unsigned int);
		write(fd, "u", 1);
	}
	else if (str[i] == 'x')
	{
		arg = va_arg(argl,unsigned int);
		write(fd, "x", 1);
	}
	else if (str[i] == 'X')
	{
		arg = va_arg(argl,unsigned);
		write(fd, "X", 1);
	}
	else
		write(1, "cattivo", 7);




	return 1; //char stampati da aggiustare
}
