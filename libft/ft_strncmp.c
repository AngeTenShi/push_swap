/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:50:58 by anggonza          #+#    #+#             */
/*   Updated: 2022/03/10 13:24:17 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char)s1[i] || (unsigned char)s2[i]) && (i < n))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return (0);
		i++;
	}
	return (1);
}
