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
		if (!(i += print_del(&toprint)))
			return (-1);
		if (!(i += conv_detec(toprint, ap)))
			return (-1);
	}
}

/*boucler le premier whilejusqu'a ce que toprint soit vide
choses a imprimer puis renvoyer la vleur des I cumulee*/