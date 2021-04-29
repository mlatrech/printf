#include "libft.h"
#include <stdio.h>

/*int		main()
{
	char	*to_change;
	char	*to_insert;

	to_change = ft_strdup("salut amis");
	to_insert = ft_strdup("les ");
	ft_insert_strseg(to_change, 5, 6, to_insert);
	printf("%s\n", to_change);
	free(to_change);
	free(to_insert);
	return(1);
}*/

/*pour verifier*/
int	main()
{
	char	a = 12;
	void	*c;

	c = &a;
	printf("%.8p\n", c);
	return(0);
}