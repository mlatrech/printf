/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 06:42:07 by mlatrech          #+#    #+#             */
/*   Updated: 2021/05/12 06:42:07 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "printf2.h"

int			star_manager(char *toprint, va_list ap)
{
	int		i;

	i = 0;
	while (toprint[++i] != 'c' || toprint[i] != 's' || toprint[i] != 'p'
			|| toprint[i] != 'd' || toprint[i] != 'i'
			|| toprint[i] != 'u' || toprint[i] != 'x'
			|| toprint[i] != 'X')
	{
		if (toprint[i] == '*')
			if (!(ft_insert_strseg(toprint, i - 1, i + 1,
				ft_itoa(va_arg(ap, int)))))
				return (-1);
	}
	return (1);
}

/* il faut essayer de trouver un * (avant la conversion), si * = 0
on renvoie direct, sinon on cherche ensuite un $, si $ = 0 on remplace juste
par l'argument suivant et on avance dans la valist, sinon on ???
(determiner la stratégie de naviguation des mes valist) et on remplace par l'argment.*/

