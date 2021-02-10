/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:59:26 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 14:59:26 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (dst || src)
	{
		if (size == 0)
			return (ft_strlen(src));
		while (i < size - 1 && src[i] != 0)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
		return (ft_strlen(src));
	}
	return (0);
}
