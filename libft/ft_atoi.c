/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 00:23:39 by anggonza          #+#    #+#             */
/*   Updated: 2022/05/04 12:44:39 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//TODO 25 lines

int	ft_check_overflow(int num, const char *str, int i)
{
	if (num > ((str[i] - 48) + (num * 10)))
		return (0);
	return (1);
}

int	ft_atoi(const char *str)

{
	int	i;
	int	num;
	int	neg;

	neg = 1;
	num = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (!ft_check_overflow(num, str, i))
			return (0);
		num = (str[i] - 48) + (num * 10);
		i++;
	}
	return (num * neg);
}
