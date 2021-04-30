/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrndup_inc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:00:30 by mlatrech          #+#    #+#             */
/*   Updated: 2021/04/30 20:17:17 by aviscogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrndup_inc(const char *s1, int end)
{
	char	*cpy;
	char	*tmp;
	int		i;

	tmp = (char *)s1;
	i = end;
	if (!(cpy = malloc(sizeof(*cpy) * end + 1)))
		return (0);
	while (i >= 0)
	{
		cpy[i] = tmp[i];
		i--;
	}
	cpy[end + 1] = 0;
	return (cpy);
}
