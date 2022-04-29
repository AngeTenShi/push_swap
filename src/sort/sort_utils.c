/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:10:04 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/29 16:43:22 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

int	ft_is_sort(t_list *stack_a, t_list *stack_b)
{
	int	min;

	min = stack_a->content;
	stack_a = stack_a->next;
	while (stack_a)
	{
		if (ft_lstsize(stack_b) != 0 || stack_a->content < min)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}
