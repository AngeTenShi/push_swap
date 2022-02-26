/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:33:03 by anggonza          #+#    #+#             */
/*   Updated: 2021/11/03 18:58:38 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhexa_caps(unsigned int nb, int *count)
{
	char	*hexa;

	hexa = ft_strdup("0123456789ABCDEF");
	if (!hexa)
		return ;
	if (nb >= 0 && nb <= 15)
	{
		ft_putchar_count(hexa[nb], count);
	}
	else
	{
		ft_printhexa_caps(nb / 16, count);
		ft_putchar_count(hexa[nb % 16], count);
	}
	free(hexa);
}

void	ft_printhexa(unsigned int nb, int *count)
{
	char	*hexa;

	hexa = ft_strdup("0123456789abcdef");
	if (!hexa)
		return ;
	if (nb >= 0 && nb <= 15)
	{
		ft_putchar_count(hexa[nb], count);
	}
	else
	{
		ft_printhexa(nb / 16, count);
		ft_putchar_count(hexa[nb % 16], count);
	}
	free(hexa);
}
