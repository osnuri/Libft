/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyuceba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:55:27 by osyuceba          #+#    #+#             */
/*   Updated: 2022/12/28 11:55:28 by osyuceba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == 0)
		return ((char *)big);
	i = 0;
	if (!len)
		return (NULL);
	while (big[i] != 0 && i < len)
	{
		j = 0;
		while (big[i + j] == needle[j]
			&& needle[j] != 0 && j + i < len)
			j++;
		if (!needle[j])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
