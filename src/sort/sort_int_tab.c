/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:25:30 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/21 14:29:16 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

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
	int	i;
	int	sorted;
	int	size;

	sorted = 1;
	size = get_size(tab);
	i = 0;
	while (sorted)
	{
		i = 0;
		sorted = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				sorted = 1;
			}
			i++;
		}
	}
}
