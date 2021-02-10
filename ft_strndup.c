/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:00:12 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 15:03:05 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strndup(const char *s1, int start)
{
	char		*cpy;
	char		*tmp;
	int			i;
	int			a;

	a = 0;
	tmp = (char *)s1;
	i = start;
	while (tmp[i])
		i++;
	if (!(cpy = malloc(sizeof(*cpy) * (i - start) + 1)))
		return (0);
	i = start - 1;
	while (tmp[++i] != 0)
		cpy[a++] = tmp[i];
	cpy[i] = 0;
	return (cpy);
}
