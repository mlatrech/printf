/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_alt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:58:39 by mlatrech          #+#    #+#             */
/*   Updated: 2021/05/09 00:37:34 by aviscogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr_alt(const char *s, int c, int *i)
{
	int		d;
	char	*tmp;

	tmp = (char *)s;
	d = 0;
	if (c == 0)
		return (i[0] = ft_strlen(s));
	while (tmp[d] != 0)
	{
		if (tmp[d] == (char)c)
		{
			return (i[0] = d);
		}
		d++;
	}
	return (0);
}
