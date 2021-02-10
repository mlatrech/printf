/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:57:05 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 14:57:08 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
			int c, size_t n)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;
	unsigned char	chr;
	size_t			i;

	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	chr = (unsigned char)c;
	i = 0;
	if (!(dst || src))
		return (NULL);
	while (i < n)
	{
		if (tmpsrc[i] != chr)
			tmpdst[i] = tmpsrc[i];
		else
		{
			tmpdst[i] = tmpsrc[i];
			return ((char *)dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
