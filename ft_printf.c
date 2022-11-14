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

#include "libft/libft.h"
#include "libftprintf.h"

int	ft_count_params(const char *str)
{
	char	*new_str;
	int		count;
	int		str_len;

	str_len = 0;
	count = 0;
	while (*str)
	{
		str_len = ft_strlen(str);
		new_str = ft_strnstr(str, "%c", str_len);
		if (new_str != NULL)
		{
			str = new_str;
			str+= 2;
			count++;
		}
		str++;
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	return (ft_count_params(s));
}
