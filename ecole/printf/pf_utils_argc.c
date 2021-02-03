/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_utils_argc.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mlatrech <mlatrech@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/17 21:17:25 by mlatrech     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/17 21:20:33 by mlatrech    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "printf.h"

int		pf_c_arg(char *toprint, va_list currentarg)
{
	int	i;
	int	fwsize;

	i = ft_strchr(toprint, '%');
	while (toprint[++i] != 'c')
		if (toprint[i] == '*')
			star_manager(toprint, i, currentarg);//en premier car se gere avec un arg avant le vrai argument converné
	i = ft_strchr(toprint, '%');
	while (toprint[++i] != 'c')
		if (((toprint[i] > 47 && toprint[i] < 58)
		&& ((toprint[i - (i != 0)] != '.')
		|| (toprint[i - (i != 0)] > 47 && toprint[i - (i != 0)] < 58)))
		|| toprint[i] == 45)//cherche un moins ou un chiffre et s'assure que ce n'est pas une precision
			fwsize = fwmanager();//en dernier car doit gerer en fct de la taille de l'arg final donc apres la precision
	return (1 + fwsize);
}

/*int		precmanagerc(char *toprint, int start, va_list argptr)
{
	int		i;
	int		a;
	char	*toatoi;

	i = ft_strchr_lim(toprint, '.', start,
	ft_strchr_lim(toprint, 'c', start, ft_strlen(toprint)));
	toatoi = ft_strndup_lim(toprint, i,
	ft_strchr_lim(toprint, 'c', start, ft_strlen(toprint)));
	a = ft_atoi(toatoi);
}*/
