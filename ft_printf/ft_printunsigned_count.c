/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned_count.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:14:36 by anggonza          #+#    #+#             */
/*   Updated: 2021/11/03 18:41:05 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printunsigned_count(unsigned int nb, int *count)
{
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar_count(nb + 48, count);
	}
	else
	{
		ft_printunsigned_count(nb / 10, count);
		ft_putchar_count((nb % 10) + 48, count);
	}
}
