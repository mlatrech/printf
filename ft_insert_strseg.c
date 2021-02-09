#include "libft.h"

int			err_manchange(char *str1, char *str2)
{
	free(str1);
	free(str2);
	return (-1);
}

int			err_man1(char *str)
{
	free(str);
	return (0);
}

int			ft_insert_strseg(char *to_change, int start, int end,
			char *to_insert)
{
	char	*start_buffer;
	char	*end_buffer;

	if (!(start_buffer = ft_strrndup(to_change, start)))
		return (0);
	if (!(end_buffer = ft_strndup(to_change, end)))
		return (err_man1(start_buffer));
	free(to_change);
	if (!(to_change = ft_strjoin(start_buffer, to_insert)))
		return (err_manchange(start_buffer, end_buffer));
	free(start_buffer);
	if (!(start_buffer = ft_strdup(to_change)))
		return (err_man1(end_buffer));
	free(to_change);
	if (!(to_change = ft_strjoin(start_buffer, end_buffer)))
		return (err_manchange(start_buffer, end_buffer));
	free(start_buffer);
	free(end_buffer);
	return (1);
}/*renvoi 0 en cas d'erreur malloc classique,
-1 en cas d'erreur sur tochange (il faut donc ne pas le free
 dans la fct suivante)*/




/*peut leak car return ne free pas tout si le malloc echoue : solution 
compartimenter la fonction en fonctions subsequentes qui 
free et return start_buffer et end_buffer a chaque possibilité 
d'error ou alors faire des codes erreurs et les gerer*/