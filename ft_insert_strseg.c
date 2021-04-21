/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_strseg.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:15:12 by mlatrech          #+#    #+#             */
/*   Updated: 2021/04/21 05:22:33 by aviscogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
}
/*

return -1 if you have to not free to_change in the calling fonction, 0 else.

*/
