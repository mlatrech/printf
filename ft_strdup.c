/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mlatrech <mlatrech@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/25 21:46:43 by mlatrech     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/30 20:49:22 by mlatrech    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	char	*tmp;
	int		i;

	tmp = (char *)s1;
	i = 0;
	while (tmp[i])
		i++;
	if (!(cpy = malloc(sizeof(*cpy) * i + 1)))
		return (0);
	i = -1;
	while (tmp[++i] != 0)
		cpy[i] = tmp[i];
	cpy[i] = 0;
	return (cpy);
}
