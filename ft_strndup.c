/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:46:43 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/01 05:59:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strndup(const char *s1, int start)
{
	char		*cpy;
	char		*tmp;
	int		i;
	int		a;

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
