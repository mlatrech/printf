/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:58:46 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 14:58:47 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	char	*tmp;
	int		i;

	tmp = (char *)s1;
	i = 0;
	while (tmp[i])
		i++;
	if (!(cpy = malloc(sizeof(*cpy) * i + 1)))
		return (0);
	i = -1;
	while (tmp[++i] != 0)
		cpy[i] = tmp[i];
	cpy[i] = 0;
	return (cpy);
}
