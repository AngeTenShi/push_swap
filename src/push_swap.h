/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:07:21 by anggonza          #+#    #+#             */
/*   Updated: 2022/03/03 16:34:23 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
	void			*content;
	struct s_stack	*next;
}	t_stack;

<<<<<<< HEAD
void	free_split(char **splitted);
int		ft_parse_single(char *str);
=======
int     ft_parse_single(char *str);
int	    ft_parse_multiple(char **str);
void    init_stack(t_stack *stack_a);
void    push_swap(t_stack *stack_a, t_stack *stack_b);
>>>>>>> 44aa5f4d10cce67947d7126d741cb8758843660e

#endif
