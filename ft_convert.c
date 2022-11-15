/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:30:09 by mmrabet           #+#    #+#             */
/*   Updated: 2022/11/15 09:30:09 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert(const char *s, va_list parameters_infos, t_printf *data)
{
	while (*s)
	{
		if (*s != '%')
			ft_putchar_len(*s, data);
		if (*s == '%')
		{
			s++;
			if (*s == 'c' || *s == 's' || *s == '%')
				ft_convert_str(s, data, parameters_infos);
			else if (*s == 'd')
				ft_convert_nbr(s, data, parameters_infos);
			if (*s == 'p')
				ft_convert_ptr(s, data, parameters_infos);
		}
		s++;
	}
}
