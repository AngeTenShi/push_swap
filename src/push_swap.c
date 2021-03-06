/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:56:05 by anggonza          #+#    #+#             */
/*   Updated: 2022/05/04 12:36:23 by anggonza         ###   ########.fr       */
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

int	tab_is_sorted(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i + 1] < tab[i])
			return (0);
		i++;
	}
	return (1);
}

int	*ft_create_tab_int(char **str, int splitted, int *size)
{
	int	i;
	int	*new;

	*size = ft_strlenn(str);
	new = ft_calloc(*size, sizeof(int));
	i = 0;
	while (str[i])
	{
		new[i] = ft_atoi(str[i]);
		i++;
	}
	if (tab_is_sorted(new, *size))
	{
		if (splitted)
			free_split(str);
		free(new);
		exit(0);
	}
	return (new);
}

void	ft_free_stack(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	while (*stack_a)
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		free(temp);
	}
	stack_a = NULL;
	stack_b = NULL;
}

void	push_swap(char **str, int splitted, int *size)
{
	t_list	*stack_a;
	int		*parsed_args;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	parsed_args = ft_create_tab_int(str, splitted, size);
	init_stack(&stack_a, &stack_b, parsed_args, *size);
	free(parsed_args);
	parsed_args = NULL;
	sort(&stack_a, &stack_b);
	ft_free_stack(&stack_a, &stack_b);
}
