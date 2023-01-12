/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyuceba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:27:38 by osyuceba          #+#    #+#             */
/*   Updated: 2023/01/12 11:26:46 by osyuceba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	i = 0;
	dest2 = (char *)dest;
	src2 = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (src2 < dest2)
		while (++i <= n)
			dest2[n - i] = src2[n - i];
	else
		return (ft_memcpy(dest, src, n));
	return (dest);
}
