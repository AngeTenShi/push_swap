/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:53:45 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/20 17:19:04 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp_swap;
	int		tmp_val;

	if (ft_lstsize(*stack) < 2)
		return ;
	tmp = *stack;
	tmp_swap = tmp->next;
	tmp_val = tmp->content;
	tmp->content = tmp_swap->content;
	tmp_swap->content = tmp_val;
}

void	rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	tmp = *stack;
	last = *stack;
	*stack = tmp->next;
	while (last->next)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
}

void	push(t_list **source, t_list **destination)
{
	t_list	*tmp_source;
	t_list	*tmp_dest;

	tmp_source = *source;
	tmp_dest = *destination;
	*source = tmp_source->next;
	tmp_source->next = tmp_dest;
	*destination = tmp_source;
}
