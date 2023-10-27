/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <dwilun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:08:16 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/27 09:18:13 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		count;
	long	num;

	count = 0;
	num = (long)n;
	if (num < 0)
	{
		num *= -1;
		ft_putchar('-');
		count++;
	}
	if (num >= 10)
	{
		count += ft_putnbr(num / 10);
		num %= 10;
	}
	if (num < 10)
	{
		ft_putchar(num + '0');
		count++;
	}
	return (count);
}
/*
int main() {
    int fd = 1; // 1 rappresenta stdout (il terminale)
    int number = -2147483648; // Sostituisci con il numero che vuoi stampare

    ft_putnbr(number);
    write(fd, "\n", 1); // Aggiungi una nuova riga per separare l'output

    return 0;
}
*/