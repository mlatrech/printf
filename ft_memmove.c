/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mlatrech <mlatrech@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 05:47:33 by mlatrech     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/04 11:40:47 by mlatrech    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;
	size_t			i;

	if (!(dst || src))
		return (NULL);
	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	i = 0;
	if (tmpsrc < tmpdst)
		while (++i <= n)
			tmpdst[n - i] = tmpsrc[n - i];
	else
		while (n-- > 0)
			*(tmpdst++) = *(tmpsrc++);
	return (dst);
}
