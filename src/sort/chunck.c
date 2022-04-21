/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunck.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:43:55 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/21 15:47:22 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	first_chunck_op(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	rotate(stack_b);
}

void	second_chunck_op(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
}

void	push_to_chunck(int *tab, t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	pas;
	int	med1;
	int	med2;

	pas = get_size(tab) / 3;
	i = 0;
	med1 = get_size(tab) - pas;
	med2 = get_size(tab) - 2 * pas;
	ft_sort_int_tab(tab);
	while (tab[i])
	{
		if (tab[i] <= tab[med1])
			first_chunck_op(stack_a, stack_b);
		else if (tab[i] <= tab[med2])
			second_chunck_op(stack_a, stack_b);
		i++;
	}
}
