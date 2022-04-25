/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:01:24 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/25 13:39:58 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

int	*get_new_tab(int *tab)
{
	int	i;
	int	j;
	int	*new_tab;

	new_tab = malloc(sizeof(int) * (get_size(tab) / 3 + 1));
	i = get_size(tab) - get_size(tab) / 3 - 1;
	j = 0;
	while (tab[i])
	{
		new_tab[j] = tab[i];
		j++;
		i++;
	}
	free(tab);
	return (new_tab);
}

void	sort(int *tab, t_list **stack_a, t_list **stack_b)
{
	while (get_size(tab) > 6)
	{
		push_to_chunck(tab, stack_a, stack_b);
		tab = get_new_tab(tab);
	}
}
