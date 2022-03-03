/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:19:41 by anggonza          #+#    #+#             */
/*   Updated: 2022/03/03 15:52:02 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

<<<<<<< HEAD:src/utils.c
void	free_split(char **splitted)
{
	int	i;

	i = 0;
	while (splitted[i])
	{
		free(splitted[i]);
		i++;
	}
	free(splitted);
=======
int	ft_parse_single(char *str)
{
	return (0);
}

int	ft_parse_multiple(char **str)
{
	return (0);
>>>>>>> 44aa5f4d10cce67947d7126d741cb8758843660e:src/parse.c
}
