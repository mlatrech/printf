/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mlatrech <mlatrech@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 05:50:09 by mlatrech     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/04 13:06:50 by mlatrech    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	if (c == 0)
		return (tmp + ft_strlen(s));
	while (tmp[i] != 0)
	{
		if (tmp[i] == (char)c)
		{
			return (&tmp[i]);
		}
		i++;
	}
	return (0);
}
