/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkflag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:17:31 by anggonza          #+#    #+#             */
/*   Updated: 2021/11/03 18:52:18 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkflag(const char *input, int index, int *count, va_list args)
{
	int	i;

	i = index + 1;
	if (input[i] == 'c')
		ft_putchar_count(va_arg(args, int), count);
	else if (input[i] == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (input[i] == 'p')
		ft_printptr_count(va_arg(args, unsigned long), count, 0);
	else if (input[i] == 'd' || input[i] == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (input[i] == 'u')
		ft_printunsigned_count(va_arg(args, unsigned int), count);
	else if (input[i] == 'x')
		ft_printhexa(va_arg(args, unsigned int), count);
	else if (input[i] == 'X')
		ft_printhexa_caps(va_arg(args, unsigned int), count);
	else if (input[i] == '%')
		return (0);
	else
		return (-1);
	return (1);
}
