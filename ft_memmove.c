/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:57:43 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 14:57:44 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;
	size_t			i;

	if (!(dst || src))
		return (NULL);
	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	i = 0;
	if (tmpsrc < tmpdst)
		while (++i <= n)
			tmpdst[n - i] = tmpsrc[n - i];
	else
		while (n-- > 0)
			*(tmpdst++) = *(tmpsrc++);
	return (dst);
}
