/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:16:21 by anggonza          #+#    #+#             */
/*   Updated: 2021/11/03 18:47:21 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_count(char c, int *count)
{
	ft_putchar(c);
	*count += 1;
}
