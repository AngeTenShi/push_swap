/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:26:52 by anggonza          #+#    #+#             */
/*   Updated: 2022/05/04 12:02:14 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*get_copy_tab(int *tab, int size)
{
	int	*new_tab;
	int	i;

	i = 0;
	new_tab = ft_calloc(size, sizeof(int));
	while (i < size)
	{
		new_tab[i] = tab[i];
		i++;
	}
	return (new_tab);
}

int	get_index_simplify(int *temp, int item, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (temp[i] == item)
			return (i);
		i++;
	}
	return (0);
}

void	init_stack(t_list **stack_a, t_list **stack_b, int *parsed_args,
					int size)
{
	int	i;
	int	*sorted;

	i = 0;
	sorted = get_copy_tab(parsed_args, size);
	ft_sort_int_tab(sorted, size);
	while (i < size)
	{
		ft_lstadd_back(stack_a, ft_lstnew(get_index_simplify(sorted,
					parsed_args[i], size)));
		i++;
	}
	free(sorted);
	i = 0;
	*stack_b = NULL;
}
