/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:22:12 by mmrabet           #+#    #+#             */
/*   Updated: 2022/11/15 15:22:12 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_nbr(const char *s, t_printf *data, va_list parameters_infos)
{
	t_type	type;

	if (*s == 'd')
	{
		type.decimal_value = (int)va_arg(parameters_infos, int);
		ft_putnbr(type.decimal_value, data);
	}
}
