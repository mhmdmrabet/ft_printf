/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:07:02 by mmrabet           #+#    #+#             */
/*   Updated: 2022/11/14 09:07:02 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdint.h>
# include <stdarg.h>

typedef struct s_printf
{
	char	*str_value;
	char	char_value;
	int		nb_params;
	int		len;
}	t_printf;

typedef struct s_type
{
	unsigned long long	ptr_value;
	char				*str_value;
	char				char_value;
	int					decimal_value;
}	t_type;

size_t	ft_strlen(const char *s);
void	ft_convert(const char *s, va_list parameters_infos, t_printf *data);
void	ft_convert_ptr(va_list parameters_infos);
void	ft_convert_str(const char *s, t_printf *data, va_list parameters_infos);
void	ft_convert_nbr(const char *s, t_printf *data, va_list parameters_infos);
void	ft_putchar_len(char c, t_printf *data);
void	ft_putnbr(int n, t_printf *data);
void	ft_putstr(char *s, t_printf *data);
int		ft_printf(const char *s, ...);
int		ft_search_params(const char *str);
int		ft_is_type(char c);

#endif