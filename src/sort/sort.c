/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:01:24 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/21 15:40:24 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

int	*get_new_tab(int *tab)
{
	int	i;
	int	*new_tab;

	new_tab = malloc(sizeof(int) * (get_size(tab) / 3));
	i = 0;
	while (tab[i])
	{
		if (i <= get_size(tab) / 3)
			new_tab[i] = tab[i];
		i++;
	}
	return (new_tab);
}

void	sort(int *tab, t_list **stack_a, t_list **stack_b)
{
	printf("%d", ft_lstsize(*stack_a));
	while (ft_lstsize(*stack_a) > 6)
	{
		push_to_chunck(tab, stack_a, stack_b);
		tab = get_new_tab(tab);
		print_stack(stack_a, stack_b);
	}
	printf("fini\n");
}
