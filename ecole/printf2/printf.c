/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:54:20 by mlatrech          #+#    #+#             */
/*   Updated: 2021/05/13 08:23:23 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "printf2.h"

int		ft_printf(const char *s, ...)
{
	char	*toprint;
	va_list	ap;
	va_list	ac; /*le but serait de copier la liste de base sans jamais la toucher et d'incrémenter la copie a va_arg (cad: une liste a juste va_arg et une liste pour gérer des *m$ (seule utilisation ?))*/
	int		i;
	int		a;

	i = 0;
	a = 0;
	toprint = ft_strdup(s);
	va_start(ap, s);
	va_copy(ap, ac);
	while (toprint)
	{
		if (!(a += print_del(toprint)))
			return (-1);
		if (a < i)
			return (-1);
		else
			i += a;
		if (!(conv_detec(toprint, ap))) /* ne doit en aucun cas modifier i trouver par quoi le remplacer*/
			return (-1);
	}
	va_end(ap);
	return (i);
}

/*WIP:	- rajouter une variable pour garder trace du statut de copie précédent pour
déterminer si une erreur s'est produite lors de la dernière boucle

		- TBD
*/

/*boucler le premier while jusqu'a ce que toprint soit vide
choses a imprimer puis renvoyer la valeur des I cumulee*/