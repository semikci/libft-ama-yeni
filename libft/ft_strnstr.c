/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 01:43:48 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/14 02:28:37 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	n;

	n = 0;
	if (*s2 == 0)
		return ((char *)s2);
	n = ft_strlen(s2);
	while (*s1++ && n <= len--)
		if (*s1 == *s2 && ft_strncmp(s1, s2, n) == 0)
			return ((char *)s1);
	return (NULL);
}
