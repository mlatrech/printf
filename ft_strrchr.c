/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:00:23 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 15:00:23 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	tmp = (char *)s;
	i = ft_strlen(s);
	if (c == 0)
		return (tmp + i);
	while (i >= 0)
	{
		if (tmp[i] == (char)c)
		{
			return (tmp + i);
		}
		i--;
	}
	return (NULL);
}
