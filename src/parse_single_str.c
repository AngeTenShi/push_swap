/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_single_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:49:04 by anggonza          #+#    #+#             */
/*   Updated: 2022/03/10 15:34:11 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_same(char **str)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (ft_strlen(str[i - 1]) == ft_strlen(str[i]))
		{
			if (ft_strncmp(str[i - 1], str[i], ft_strlen(str[i])) == 0)
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_is_int(char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (!ft_strncmp(str[i], "2147483647", 10))
			return (0);
		while (str[i][j])
		{
			if ((ft_isdigit(str[i][j]) == 0 && str[i][j] != '-')
			|| (j != 0 && str[i][j] == '-'))
				return (0);
			if (str[i][j] == '0' && str[i][j + 1])
				return (0);
			if (str[i][j] == '-' && !str[i][j + 1])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	ft_parse_single(char *str)
{
	char	**tmp;

	if (!str[0] || !str)
		return (0);
	tmp = ft_split(str, ' ');
	if (ft_same(tmp) && ft_is_int(tmp))
	{
		free_split(tmp);
		return (1);
	}
	else
	{
		free_split(tmp);
		return (0);
	}
}
