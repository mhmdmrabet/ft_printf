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


void	ft_convert(const char *s, va_list parameters_infos)
{
	t_type	type;

	while (*s)
	{
		if (*s != '%')
			ft_putchar_fd(*s, 1);
		if (*s == '%')
		{
			s++;
			if (*s == 'c')
			{
				type.char_value = (char)va_arg(parameters_infos, int);
				ft_putchar_fd(type.char_value, 1);
			}
			else if (*s == 's')
			{
				type.str_value = (char *)va_arg(parameters_infos, char *);
				ft_putstr_fd(type.str_value, 1);
			}
			else if (*s == 'd')
			{
				type.decimal_value = (int)va_arg(parameters_infos, int);
				ft_putnbr_fd(type.decimal_value, 1);
			}
			else if (*s == '%')
				ft_putchar_fd('%', 1);
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
	ft_convert(s, parameters_infos);
	va_end(parameters_infos);
	return (1);
}
