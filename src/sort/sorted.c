/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:10:04 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/20 15:14:06 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sort(t_list *stack_a, t_list *stack_b)
{
	int	min;

	min = stack_a->content;
	while (stack_a)
	{
		if (ft_lstsize(stack_b) != 0 || stack_a->content > min)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}
