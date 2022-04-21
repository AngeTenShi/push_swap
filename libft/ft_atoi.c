/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 00:23:39 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/21 14:13:14 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)

{
	int	i;
	int	num;
	int	neg;

	neg = 1;
	num = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\b' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i])
	{
		if (num > ((str[i] - 48) + (num * 10)))
			exit(EXIT_FAILURE);
		if (str[i] >= '0' && str[i] <= '9')
			num = (str[i] - 48) + (num * 10);
		else
			return (num * neg);
		i++;
	}
	return (num * neg);
}
