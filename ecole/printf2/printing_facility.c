/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing_facility.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 15:27:47 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/05 17:00:11 by mlatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf2.h"
#include <stdio.h>

int		printer(char *printable)
{
	int	i;

	i = 0;
	while (printable[i++]);
	ft_putstr(printable);
	return (i);
}

int		print_del(char *toprint)
{
	int		i;
	char	*tosend;
	char	*buffer;

	buffer = NULL;
	if (!(tosend = ft_strrndup(toprint, i = ft_strchr(toprint, '%'))))
		return (-1);
	if (i > 0)
		if (!(buffer = ft_strndup(toprint, i - 1)))
			return (err_manager(1, tosend));
	free(toprint);
	if (!(toprint = ft_strdup(tosend)))
		return (err_manager(2, buffer, tosend));
	free(tosend);
	i = 0;
	if (buffer)
	{
		i = printer(buffer);
		free(buffer);
	}
	return (i);
}

/*partie {[("finie")]} destinée a l'impression sur la sortie std des parties
preecrites de la chaine et les supprimes de la chaine de maniere a ce
qu'une conversion soit tjrs en debut de toprint*/