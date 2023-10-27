/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <dwilun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:31:23 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/25 09:16:54 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
/*
int main() {
    char character = 'A'; // Il carattere da stampare
    int file_descriptor = 1; // 1 rappresenta stdout (il terminale)

    ft_putchar_fd(character, file_descriptor);

    return 0;
}
*/
