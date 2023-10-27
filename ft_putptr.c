/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <dwilun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:07:16 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/27 09:24:07 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_stampina(int i, char *base, int *arr)
{
	int	count;

	count = 0;
	while (--i >= 0)
	{
		ft_putchar(base[(int)arr[i]]);
		count++;
	}
	return (count);
}

int	ft_putptr(void *ptr, char *base)
{
	size_t	n;
	int		i;
	int		arr[30];
	int		count;

	count = 0;
	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	n = (size_t)ptr;
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	count += ft_putstr("0x");
	i = 0;
	while (n > 0)
	{
		arr[i++] = n % 16;
		n /= 16;
	}
	return (count + ft_stampina(i, base, arr));
}

/*
int	ft_putptr(void *ptr, char *base, size_t len)
{
	int		count;
	size_t	n;

	count = 0;
	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	n = (size_t)ptr;
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	count += ft_putstr("0x");
	count += ft_putnbr_b(n, base, len);
	return (count);
}
*/
/*
int main() {
    void *ptr = (void *)-1; // Sostituisci con il tuo puntatore
    char base[] = "0123456789abcdef"; // Base per la conversione esadecimale

	if (!ptr) 
	{
		printf("Errore nell'allocazione di memoria.\n");
		return 1;
	}
	int result = ft_putptr(ptr, base, 16);
	printf(" La funzione ha restituito: %d\n", result);
	printf("%p", (void *)-1);
	return 0;
}
*/