/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:25:30 by anggonza          #+#    #+#             */
/*   Updated: 2022/05/03 18:35:08 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_size(int *tab)
{
	int	i;

	i = 0;
	while (tab[i] || tab[i + 1])
		i++;
	return (i);
}

void	ft_sort_int_tab(int *tab)
{
	int		i;
	int		j;
	int		tmp;
	int		size;

	size = get_size(tab);
	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] >= tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			i++;
		}
		j++;
	}
}
