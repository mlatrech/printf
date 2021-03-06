/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:55:42 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 14:55:43 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
	{
		return (1);
	}
	return (0);
}
