/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:54:39 by mlatrech          #+#    #+#             */
/*   Updated: 2021/05/18 16:11:52 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "printf2.h"

int		argmanager_cspd(char *toprint, va_list ap)
{
	int	pos;
	int	i;

	pos = 0;
	while (toprint[++pos])
	{
		if (toprint[pos] == 'c')
			if(!(i = pf_c_arg(toprint, ap)))
				return (-1);
		else if (toprint[pos] == 's')
			if(!(i =pf_s_arg(toprint, ap)))
				return (-1);
		else if (toprint[pos] == 'p')
			if(!(i = pf_p_arg(toprint, ap)))
				return (-1);
		else if (toprint[pos] == 'd')
			if(!(i = pf_d_arg(toprint, ap)))
				return (-1);
	}
	return (i);
}

int		argmanager_ixXu(char *toprint, va_list ap)
{
	int	pos;
	int	i;

	pos = 0;
	while (toprint[++pos])
	{
		if (toprint[pos] == 'i')
			if(!(i = pf_i_arg(toprint, ap)))
				return (-1);
		else if (toprint[pos] == 'u')
			if(!(i =pf_u_arg(toprint, ap)))
				return (-1);
		else if (toprint[pos] == 'x')
			if(!(i = pf_x_arg(toprint, ap)))
				return (-1);
		else if (toprint[pos] == 'X')
			if(!(i = pf_X_arg(toprint, ap)))
				return (-1);
		else if (toprint[pos] == '%')
			if(!(i = pf_wtf_arg(toprint)))
				return (-1);
	}
	return (i);
}

int		conv_detec(char *toprint, va_list ap)
{
	int	i;
	int	toret;

	toret = -1;
	i = 0;
	while (toprint[++i])
	{
		if (toprint[i] == 'c' || toprint[i] == 'p' ||
		toprint[i] == 's' || toprint[i] == 'd')
			if (!(toret = argmanager_cspd(toprint, ap)))
				return (-1);
		if (toprint[i] == 'i' || toprint[i] == 'x'
		|| toprint[i] == 'X' || toprint[i] == '%'
		|| toprint[i] == 'u')
			if (!(toret = argmanager_ixXu(toprint, ap)))
				return (-1);
	}
	return (toret);
}

/*commence la repartition du travail en fonction de la conversion*/