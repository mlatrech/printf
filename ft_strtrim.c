/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:00:35 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 15:00:36 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_charset(const char *str, char c)
{
	int		a;

	a = -1;
	while (str[++a] != 0)
	{
		if (str[a] == c || c == 0)
			return (1);
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		z;
	int		i;
	size_t	len;

	i = -1;
	a = 0;
	while (is_in_charset(set, s1[++i]) && s1[i])
		a++;
	z = ft_strlen(s1);
	i = ft_strlen(s1) + 1;
	while (is_in_charset(set, s1[--i]) && z >= a)
		z--;
	len = z - a + 1;
	return (ft_substr(s1, a, len));
}
