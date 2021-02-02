/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mlatrech <mlatrech@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 05:40:28 by mlatrech     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/04 13:26:01 by mlatrech    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	tmp = (char *)s;
	i = ft_strlen(s);
	if (c == 0)
		return (tmp + i);
	while (i >= 0)
	{
		if (tmp[i] == (char)c)
		{
			return (tmp + i);
		}
		i--;
	}
	return (NULL);
}
