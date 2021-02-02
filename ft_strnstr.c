/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mlatrech <mlatrech@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 06:34:33 by mlatrech     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/04 11:46:07 by mlatrech    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
