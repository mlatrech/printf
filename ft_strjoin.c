/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:58:52 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 14:58:53 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		a;

	if (!(str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(*str))))
		return (0);
	if (!str)
		return (0);
	i = -1;
	while (s1[++i] != 0)
		str[i] = s1[i];
	a = -1;
	while (s2[++a] != 0)
		str[i + a] = s2[a];
	str[i + a] = 0;
	return (str);
}
