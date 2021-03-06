/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:00:02 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 15:00:04 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*tmps1;
	unsigned char	*tmps2;
	size_t			i;

	i = -1;
	tmps1 = (unsigned char *)s1;
	tmps2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (++i != n)
	{
		if (tmps1[i] != tmps2[i] || (tmps1[i] == 0 && tmps2[i] == 0))
			return (tmps1[i] - tmps2[i]);
	}
	return (0);
}
