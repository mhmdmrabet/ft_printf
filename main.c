/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:23:02 by mmrabet           #+#    #+#             */
/*   Updated: 2022/11/14 10:23:02 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int	main(void)
{
	printf("MY data.len -> %d\n", ft_printf("Je m'appel %s et j'ai %d ans.\n", "Mohamed", 29));
	printf("REAL data.len -> %d\n", printf("%p", "Mohamed"));
	return (0);
}
