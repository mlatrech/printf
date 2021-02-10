/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:58:39 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 14:58:40 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	if (c == 0)
		return (tmp + ft_strlen(s));
	while (tmp[i] != 0)
	{
		if (tmp[i] == (char)c)
		{
			return (&tmp[i]);
		}
		i++;
	}
	return (0);
}
