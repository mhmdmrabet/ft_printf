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
	printf("%d", ft_printf("Bonjour je m'appel %s et j'ai %c c %c%c ans%%\n"));
	return (0);
}
