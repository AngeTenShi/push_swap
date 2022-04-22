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

//TODO TROUVER PK ROTATE NE MODIFIE PAS LA STACK APRES LA SORTIE DE LA FONCTION
void	first_chunck_op(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	rotate(stack_b);
	printf("pb\nrb\n");
}

void	second_chunck_op(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	printf("pb\n");
}

void	third_chunck_op(t_list **stack_a, t_list **stack_b)
{
	(void)stack_b;
	rotate(stack_a);
	printf("ra\n");
}

//TODO TROUVER LA MEDIAN COMME IL FAUT PARCOURIR LA STACK ET COMPARER AVEC TAB[MED]
void	push_to_chunck(int *tab, t_list **stack_a, t_list **stack_b)
{
	int	pas;
	int	med1;
	int	med2;
	t_list  *stack;

	pas = get_size(tab) / 3;
	med2 = get_size(tab) - pas;
	med1 = get_size(tab) - 2 * pas;
	stack = *stack_a;
	while (stack)
	{
		printf("Stack size : %d\n", ft_lstsize(stack));
		if (stack->content <= med1)
			first_chunck_op(stack_a, stack_b);
		else if (stack->content <= med2)
			second_chunck_op(stack_a, stack_b);
		else
			third_chunck_op(stack_a,stack_b);
		stack = stack->next;
	}
}
