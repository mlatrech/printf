/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mlatrech <mlatrech@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 05:44:27 by mlatrech     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/04 12:34:30 by mlatrech    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
			int c, size_t n)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;
	unsigned char	chr;
	size_t			i;

	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	chr = (unsigned char)c;
	i = 0;
	if (!(dst || src))
		return (NULL);
	while (i < n)
	{
		if (tmpsrc[i] != chr)
			tmpdst[i] = tmpsrc[i];
		else
		{
			tmpdst[i] = tmpsrc[i];
			return ((char *)dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
