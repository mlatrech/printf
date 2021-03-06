/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:48:02 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 14:55:18 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	long long int	i;
	long long int	negative;
	int				nb;

	i = 0;
	negative = 1;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			negative = -1;
		i++;
	}
	if (str[i] < 48 || str[i] > 57)
		return (0);
	i = i - 1;
	while (str[++i] > 47 && str[i] < 58)
		nb = nb * 10 + str[i] - 48;
	return (nb * negative);
}
