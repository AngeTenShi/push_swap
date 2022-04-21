/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:26:52 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/21 12:14:54 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_stack(t_list **stack_a, t_list **stack_b, int *parsed_arguments)
{
	int	i;

	i = 0;
	while (parsed_arguments[i])
	{
		ft_lstadd_back(stack_a, ft_lstnew(parsed_arguments[i]));
		i++;
	}
	i = 0;
	*stack_b = NULL;
}
