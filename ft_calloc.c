/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mlatrech <mlatrech@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 16:33:56 by mlatrech     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 01:54:34 by mlatrech    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*mem;
	size_t	fsize;

	fsize = count * size;
	if (!(mem = malloc(fsize)))
		return (0);
	while (fsize-- != 0)
	{
		mem[fsize] = '\0';
	}
	return (mem);
}
