/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 00:56:08 by anggonza          #+#    #+#             */
/*   Updated: 2021/11/04 14:50:10 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen((const char *)s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(char *s, int *count)
{
	if (!s)
	{
		ft_putstr("(null)", count);
		return ;
	}
	while (*s)
	{
		ft_putchar_count(*s, count);
		s++;
	}
}

void	ft_putnbr(int nb, int *count)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_count('-', count);
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar_count(nb + 48, count);
	}
	else
	{
		ft_putnbr(nb / 10, count);
		ft_putchar_count((nb % 10) + 48, count);
	}
}
