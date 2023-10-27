/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <dwilun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:08:56 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/27 09:05:39 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
int		ft_conv_printf(va_list argl, int c);
int		ft_putchar(char c);
int		ft_putnbr_b(unsigned int n, char *base, unsigned int len);
int		ft_putnbr(int n);
int		ft_putptr(void *ptr, char *base);
int		ft_putstr(char *s);
#endif
