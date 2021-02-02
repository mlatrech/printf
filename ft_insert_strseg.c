#include "libft.h"

int			ft_insert_strseg(char *to_change, int start, int end,
			char *to_insert)
{
	char	*start_buffer;
	char	*end_buffer;

	if (!(start_buffer = ft_strrndup(to_change, start)))
		return(-1);
	if (!(end_buffer = ft_strndup(to_change, end)))
		return(-1);
	free(to_change);
	if (!(to_change = ft_strjoin(start_buffer, to_insert)))
		return(-1);
	free(start_buffer);
	if (!(start_buffer = ft_strdup(to_change)))
		return(-1);
	free(to_change);
	if (!(to_change = ft_strjoin(start_buffer, end_buffer)))
		return(-1);
	free(start_buffer);
	free(end_buffer);
	return(1);
}
/*peut leak car return ne free pas tout si le malloc echoue : solution 
compartimenter la fonction en fonctions subsequentes qui 
free et return start_buffer et end_buffer a chaque possibilité 
d'error ou alors faire des codes erreurs et les gerer*/