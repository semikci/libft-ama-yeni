/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 01:24:30 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/14 02:19:23 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*s1;
	const char	*s2;

	s1 = "semih ekmekci";
	s2 = "ekmekci";
	printf("%s\n",ft_strnstr(s1, s2, 14));
}
