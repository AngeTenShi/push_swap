/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_operations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:40:45 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/29 16:47:49 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_list **stack_a, t_list **stack_b, char *print)
{
	swap(stack_a);
	swap(stack_b);
	ft_putstr_fd(print, 1);
}

void	rr(t_list **stack_a, t_list **stack_b, char *print)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr_fd(print, 1);
}

void	rrr(t_list **stack_a, t_list **stack_b, char *print)
{
	rrotate(stack_a);
	rrotate(stack_b);
	ft_putstr_fd(print, 1);
}
