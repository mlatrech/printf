/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:55:33 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 14:55:34 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*mem;
	size_t	fsize;

	fsize = count * size;
	if (!(mem = malloc(fsize)))
		return (0);
	while (fsize-- != 0)
	{
		mem[fsize] = '\0';
	}
	return (mem);
}
