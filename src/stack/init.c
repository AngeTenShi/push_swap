/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:26:52 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/29 16:12:03 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*get_copy_tab(int *tab)
{
	int	*new_tab;
	int	i;

	i = 0;
	new_tab = malloc(sizeof(int) * get_size(tab));
	while (tab[i] || tab[i + 1])
	{
		new_tab[i] = tab[i];
		i++;
	}
	return (new_tab);
}

int	get_index_simplify(int *tab, int item)
{
	int	i;
	int	*temp;

	i = 0;
	temp = get_copy_tab(tab);
	ft_sort_int_tab(temp);
	while (temp[i] || temp[i + 1])
	{
		if (temp[i] == item)
		{
			free(temp);
			return (i);
		}
		i++;
	}
	return (0);
}

void	init_stack(t_list **stack_a, t_list **stack_b, int *parsed_args)
{
	int	i;

	i = 0;
	while (parsed_args[i] || parsed_args[i + 1])
	{
		ft_lstadd_back(stack_a, ft_lstnew(get_index_simplify(parsed_args,
					parsed_args[i])));
		i++;
	}
	i = 0;
	*stack_b = NULL;
}
