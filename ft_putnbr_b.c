/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <dwilun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:15:12 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/25 16:52:29 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_b(unsigned int n, char *base, unsigned int len)
{
	int		count;

	count = 0;
	if (n >= len)
	{
		count += ft_putnbr_b(n / len, base, len);
		n %= len;
	}
	if (n < len)
	{
		ft_putchar(base[n % len]);
		count++;
	}
	return (count);
}

/*
#include <stdlib.h>
int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	if(ac == 1)
	{
		printf("coglione argv\n");
		return (1);
	}
	ft_putnbr_b(atoi(av[1]), av[2], atoi(av[3]));
	printf("\n%x", atoi(av[1]));
}
*/