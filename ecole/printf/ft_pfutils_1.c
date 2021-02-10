#include "printf.h"

int		argmanager_cspd(char *toprint, va_list argptr)
{
	int	pos;
	int	i;

	pos = ft_strchr(toprint, '%');
	while (toprint[++pos])
	{
		if (toprint[pos] == 'c')
			if(!(i = pf_c_arg(toprint, argptr)))
				return (-1);
		if (toprint[pos] == 's')
			if(!(i = pf_s_arg(toprint, argptr)))
				return (-1);
		if (toprint[pos] == 'p')
			if(!(i = pf_p_arg(toprint, argptr)))
				return (-1);
		if (toprint[pos] == 'd')
			if(!(i = pf_d_arg(toprint, argptr)))
				return (-1);
	}
	return (i);
}

int		argmanager_ixXu(char *toprint, va_list argptr)
{
	int	pos;
	int	i;

	pos = ft_strchr(toprint, '%');
	while (toprint[++pos])
	{
		if (toprint[pos] == 'i')
			if(!(i = pf_i_arg(toprint, argptr)))
				return (-1);
		if (toprint[pos] == 'u')
			if(!(i =pf_u_arg(toprint, argptr)))
				return (-1);
		if (toprint[pos] == 'x')
			if(!(i = pf_x_arg(toprint, argptr)))
				return (-1);
		if (toprint[pos] == 'X')
			if(!(i = pf_X_arg(toprint, argptr)))
				return (-1);
		if (toprint[pos] == '%')
			if(!(i = pf_wtf_arg(toprint, argptr)))
				return (-1);
	}
	return (i);
}

int		fwmanager(char *toprint, int start, va_list argptr, int argtype)
{
	int		i;
	int		a;
	int		minus;
	int		fwtype;
	char	*toatoi;

	minus = 0;
	i = start;
	fwtype = 32;
	if (toprint[start] == 0 ||
	(toprint[start + 1] == 0 && toprint[start] == '-'))
		fwtype = 48;
	if (a = ft_strchr_lim(toprint, '-', start, ft_strchr(toprint, argtype)))
		start = a + (minus = 1);
	while (toprint[i] > 47 && toprint[i] < 58)
		i++;
	a = ft_atoi(toatoi = ft_strndup_lim(toprint, start, i));
	free(toatoi);
	fwmanager2(minus, fwtype, a, toprint);//sensé recup les infos d'ici pour finir le taff(remplir la chaine des 0 ou espaces appropries)
/*	if (minus)
	{
		argsetup(toprint, argptr)//doit renvoyer la longueur de ce que ca a ecris lol
	}
	else
	{
		//doit ecrire le fwtype assez de fois en fonction de la longueur de l'arg puis eccrire l' arg donc argwriter pas bon ici
	}*/
} // mettre l' arg dans toprint et y faire les operations de FW et prec (remplir avec la fw puis remplacer a gauche ou a droite selon minus)

int		star_manager(char *toprint, int pos, va_list argptr)
{
	return (ft_insert_strseg(&toprint, pos, pos, va_arg(argptr, int)));
}