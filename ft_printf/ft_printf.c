/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:25:44 by anggonza          #+#    #+#             */
/*   Updated: 2021/11/03 18:43:54 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, input);
	i = 0;
	count = 0;
	while (input[i])
	{
		if (input[i] != '%')
			ft_putchar_count(input[i], &count);
		else
		{
			if (ft_checkflag(input, i, &count, args) == 0)
				ft_putchar_count('%', &count);
			i++;
		}
		i++;
	}
	return (count);
}
