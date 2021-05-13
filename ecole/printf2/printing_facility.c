/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing_facility.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 15:27:47 by mlatrech          #+#    #+#             */
/*   Updated: 2021/05/10 05:55:55 by aviscogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "printf2.h"
#include <stdio.h>

int			err_man1(char *str1)
{
	free(str1);
	return (-1);
}

int			err_man2(char *str1, char *str2)
{
	free(str1);
	free(str2);
	return (-1);
}


int			printer(char *printable)
{
	int	i;

	i = 0;
	while (printable[i++])
		ft_putstr(printable);
	return (i);
}

int			sub_printdel(char *toprint, char *tosend, int i)
{
	char	*buffer;

	buffer = NULL;
	if (!(tosend = ft_strrndup_inc(toprint, i - 1)))
		return (-1);
	if (!(buffer = ft_strndup(toprint, i)))
		return (err_man1(tosend));
	free(toprint);
	if (!(toprint = ft_strdup(buffer)))
		return (err_man2(buffer, tosend));
	free(buffer);
	return (1);
}

int			print_del(char *toprint)
{
	int		*i;
	int		a;
	char	*tosend;
	
	i[0] = 0;
	tosend = NULL;
	if (!(i = malloc(sizeof(int))))
		return (-1);
	if (ft_strchr_alt(toprint, '%', i))
	{
		if (sub_printdel(toprint, tosend, i[0]) == -1)
			return (-1);
	}
	else
	{
		if (!(tosend = ft_strdup(toprint)))
			return (-1);
		toprint[0] = 0;
	}
	a = printer(tosend);
	free(tosend);
	free(i);
	return (a);
}

/*partie {[("finie")]} destinée a l'impression sur la sortie std des parties
preecrites de la chaine et les supprimes de la chaine de maniere a ce
qu'une conversion soit tjrs en debut de toprint*/