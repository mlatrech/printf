/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mlatrech <mlatrech@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/14 10:39:57 by mlatrech     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/17 20:48:16 by mlatrech    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "printf.h"

static int	line_rider(char *toprint, va_list argptr)
{
	int	toret;
	int	i;

	i = -1;
	while (toprint[++i]);
		if (toprint[i] == '%')
		{
			while (toprint[++i])
			{
				if (toprint[i] == 'c' || toprint[i] == 'p' ||
				toprint[i] == 's' || toprint[i] == 'd')
					if (!(toret = argmanager_cspd(toprint, argptr)))
						return (-1);
				if (toprint[i] == 'i' || toprint[i] == 'x'
				|| toprint[i] == 'X' || toprint[i] == '%'
				|| toprint[i] == 'u')
					if (!(toret = argmanager_ixXu(toprint, argptr)))
						return (-1);
			}
		}
	ft_putstr(toprint);
}

int			ft_printf(const char *s, ...)//bite
{
	va_list	argptr;
	int		i;
	int		nbarg;
	char	*toprint;

	if (!s)
		return (0);
	toprint = ft_strdup(s);
	if (!(line_rider(toprint, argptr)))
	{
		free(toprint);
		return (-1);
	}
	free(toprint);
}
