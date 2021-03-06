/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:46:29 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 14:56:34 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int c)
{
	if (c > -1 && c < 128)
	{
		return (1);
	}
	return (0);
}
