/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:20:33 by mmrabet           #+#    #+#             */
/*   Updated: 2022/11/14 09:20:33 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert(const char *s, va_list parameters_infos, t_printf *data)
{
	t_type	type;

	while (*s)
	{
		if (*s != '%')
			ft_putchar_len(*s, data);
		if (*s == '%')
		{
			s++;
			if (*s == 'c')
			{
				type.char_value = (char)va_arg(parameters_infos, int);
				ft_putchar_len(type.char_value, data);
			}
			else if (*s == 's')
			{
				type.str_value = (char *)va_arg(parameters_infos, char *);
				ft_putstr(type.str_value, data);
			}
			else if (*s == 'd')
			{
				type.decimal_value = (int)va_arg(parameters_infos, int);
				ft_putnbr(type.decimal_value, data);
			}
			else if (*s == '%')
				ft_putchar_len('%', data);
		}
		s++;
	}
}

int	ft_printf(const char *s, ...)
{
	t_printf	data;
	va_list		parameters_infos;

	data.nb_params = ft_search_params(s);
	va_start(parameters_infos, s);
	ft_convert(s, parameters_infos, &data);
	va_end(parameters_infos);
	return (data.len);
}
