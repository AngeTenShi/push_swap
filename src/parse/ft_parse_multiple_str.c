/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_multiple_str.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:55:46 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/20 14:27:13 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_same_m(char **av, int ac)
{
	int	i;
	int	j;

	j = 2;
	i = 1;
	while (i < ac)
	{
		if (av[i][0] == '-' && ft_strlen(av[i]) == 1)
			return (0);
		while (av[j])
		{
			if (ft_strlen(av[i]) == ft_strlen(av[j]) && i != j)
			{
				if (ft_strncmp(av[i], av[j], ft_strlen(av[i])))
					return (0);
			}
			j++;
		}
		i++;
		j = 1;
	}
	return (1);
}

int	ft_is_int_m(char **av, int ac)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		while (av[i][j])
		{
			if (j != 0 && !ft_isdigit(av[i][j]))
				return (0);
			if (!ft_isdigit(av[i][j]) && j == 0 && av[i][j] != '-')
				return (0);
			if (av[i][j] == '0' && av[i][j + 1])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	ft_is_overflow(char **av, int ac)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_strncmp(av[i], "2147483647", 10))
			return (0);
		if (!ft_atoi(av[i]) && av[i][0] != '0')
			return (0);
		i++;
	}
	return (1);
}

int	ft_parse_multiple(char **av, int ac)
{
	if (!av[1][0])
		return (0);
	if (ft_same_m(av, ac) && ft_is_int_m(av, ac) && ft_is_overflow(av, ac))
		return (1);
	return (0);
}
