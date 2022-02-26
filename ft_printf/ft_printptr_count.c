/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:25:14 by anggonza          #+#    #+#             */
/*   Updated: 2021/11/03 18:42:07 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printptr_count(unsigned long ptr, int *count, int state)
{
	char	*hexa;

	hexa = ft_strdup("0123456789abcdef");
	if (!hexa)
		return ;
	if (state == 0)
		ft_putstr("0x", count);
	if (ptr < 0)
	{
		ft_putchar_count('-', count);
		ptr *= -1;
	}
	if (ptr >= 0 && ptr <= 15)
	{
		ft_putchar_count(hexa[ptr], count);
	}
	else
	{
		ft_printptr_count(ptr / 16, count, 1);
		ft_putchar_count(hexa[ptr % 16], count);
	}
	free(hexa);
}
