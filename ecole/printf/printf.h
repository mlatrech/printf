/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:54:14 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 14:54:15 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include "../libft.h"

int			argmanager_cspd(char *toprint, va_list argptr);
int			pf_c_arg(char *toprint, va_list currentarg);
int			pf_s_arg(char *toprint, va_list currentarg);
int			pf_p_arg(char *toprint, va_list currentarg);
int			pf_d_arg(char *toprint, va_list currentarg);
int			pf_i_arg(char *toprint, va_list currentarg);
int			pf_u_arg(char *toprint, va_list currentarg);
int			pf_x_arg(char *toprint, va_list currentarg);
int			pf_X_arg(char *toprint, va_list currentarg);
int			pf_wtf_arg(char *toprint, va_list currentarg);
int			argmanager_ixXu(char *toprint, va_list argptr);
int			precmanagerc(char *toprint, int start, va_list argptr);
#endif