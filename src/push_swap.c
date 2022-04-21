/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:56:05 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/21 14:11:50 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_strlenn(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	*ft_create_tab_int(char **str)
{
	int	i;
	int	*new;

	new = ft_calloc(sizeof(int) * ft_strlenn(str), sizeof(int));
	i = 0;
	while (str[i])
	{
		new[i] = ft_atoi(str[i]);
		i++;
	}
	return (new);
}

void	push_swap(char **str)
{
	t_list	*stack_a;
	int		*parsed_args;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	parsed_args = ft_create_tab_int(str);
	init_stack(&stack_a, &stack_b, parsed_args);
	sort(parsed_args, &stack_a, &stack_b);
}
