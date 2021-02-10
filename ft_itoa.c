/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:56:56 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 14:56:56 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_compte_les_chiffres_pd(long int nb, long int i)
{
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char		*tab;
	long int	nb;
	long int	i;

	i = 1;
	nb = n;
	i = ft_compte_les_chiffres_pd(nb, i);
	if (!(tab = ft_calloc(sizeof(char), i + 1)))
		return (0);
	if (n < 0)
	{
		tab[0] = '-';
		nb = -nb;
	}
	tab[i--] = 0;
	while (i >= 0 && tab[i] != '-')
	{
		tab[i--] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (tab);
}
