/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrndup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:46:43 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/01 05:36:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrndup(const char *s1, int end)
{
	char	*cpy;
	char	*tmp;
	int	i;

	tmp = (char *)s1;
	i = end;
	if (!(cpy = malloc(sizeof(*cpy) * end + 1)))
		return (0);
	while (i >= 0)
	{
		cpy[i] = tmp[i];
		i--;
	}
	cpy[end + 1] = 0;
	return (cpy);
}
