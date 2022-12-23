/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyuceba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:32:04 by osyuceba          #+#    #+#             */
/*   Updated: 2022/12/21 12:32:06 by osyuceba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (dest[i] && i < size)
		i++
			while (src[c] && (i + c + 1) < size)
		{
			dest[i + c] = src[c];
		c++
		}
	if (i < size)
			dest [i + c] = '\0';
	return (i + ft_strlen(src));
}
