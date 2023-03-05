/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 23:05:00 by olahmami          #+#    #+#             */
/*   Updated: 2023/03/01 14:00:43 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *str;
	unsigned char c1;

	str = (unsigned char *)s;
	c1 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		// if ((unsigned char)c == ((unsigned char *)s)[i])
		// 	return ((unsigned char *)&s[i]);
		if (c1 == str[i])
			return (&str[i]);
		i++;
	}
	return (0);
}
