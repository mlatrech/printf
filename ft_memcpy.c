/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:57:33 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 14:57:34 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	char	*tmpdst;
	char	*tmpsrc;

	if (!(dst || src))
		return (NULL);
	tmpdst = (char *)dst;
	tmpsrc = (char *)src;
	while (n > 0)
	{
		*tmpdst++ = *tmpsrc++;
		n--;
	}
	return (dst);
}
