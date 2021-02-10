/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:00:16 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 15:00:17 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*sstr;
	char	*lstr;
	size_t	i;
	size_t	a;

	sstr = (char *)needle;
	lstr = (char *)haystack;
	i = 0;
	if (sstr[0] == 0)
		return (lstr);
	while (lstr[i] != 0 && i < len)
	{
		a = 0;
		while (lstr[i + a] == sstr[a] && (i + a) < len)
		{
			a++;
			if (sstr[a] == 0)
				return (&lstr[i]);
		}
		i++;
	}
	return (0);
}
