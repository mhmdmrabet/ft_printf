/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_ptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:03:59 by mmrabet           #+#    #+#             */
/*   Updated: 2022/11/15 16:03:59 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h";

void	ft_put_ptr(uintptr_t ptr)
{
	(void);
}

void	ft_convert_ptr(t_printf *data, va_list parameters_infos)
{
	t_type	type;

	type.ptr_value = (int)va_arg(parameters_infos, unsigned long long);
	ft_putstr("0x", data);
	if (type.ptr_value == 0)
		ft_putstr("0", data);
	else
		ft_put_ptr(type.ptr_value);
}
