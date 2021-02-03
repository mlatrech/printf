#include "printf2.h"

int		print_del(char **toprint)
{
	int		i;
	char	*tosend;
	char	*buffer;

	buffer = NULL;
	if (!(tosend = ft_strrndup(*toprint, i = ft_strchr(*toprint, '%'))))
		return (-1);
	if (i > 0)
		if (!(buffer = ft_strndup(*toprint, i - 1)))
			return (-1);
	free(*toprint);
	if (!(*toprint = ft_strdup(tosend)))
		return (-1);
	free(tosend);
	i = 0;
	if (buffer)
	{
		i = printer(buffer);
		free(buffer);
	}
	return (i);
}

int		printer(char *printable)
{
	int	i;

	i = 0;
	while (printable[i++]);
	ft_putstr(printable);
	return (i);
}

/*partie finie destinée a l'impression sur la sortie std des parties
preecrites de la chaine et les supprimes de la chaine de maniere a ce
qu'une conversion soit tjrs en debut de toprint*/