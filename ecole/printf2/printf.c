/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:54:20 by mlatrech          #+#    #+#             */
/*   Updated: 2021/04/30 22:04:36 by aviscogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "printf2.h"

int		ft_printf(const char *s, ...)
{
	char	*toprint;
	va_list	ap;
	int		i;

	i = 0;
	toprint = ft_strdup(s);
	while (toprint)
	{
		if (!(i += print_del(toprint)))
			return (-1);
		if (!(i += conv_detec(toprint, ap))) /* ne doit en aucun cas modifier i trouver par quoi le remplacer*/
			return (-1);
	}
	return (i);
}

/*WIP:	- rajouter une variable pour garder trace du statut de copie précédent pour
déterminer si une erreur s'est produite lors de la dernière boucle

		- TBD
*/

/*boucler le premier while jusqu'a ce que toprint soit vide
choses a imprimer puis renvoyer la valeur des I cumulee*/