/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyuceba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:13:22 by osyuceba          #+#    #+#             */
/*   Updated: 2023/01/12 16:13:23 by osyuceba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sjoin;
	size_t	size;
	size_t	i;
	size_t	c;

	if (s1 == 0 || s2 == 0)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	sjoin = malloc(size * sizeof(char));
	if (sjoin == 0)
		return (0);
	i = 0;
	while (i < ft_strlen(s1))
	{
		sjoin[i] = s1[i];
		i++;
	}
	c = 0;
	while (c < ft_strlen(s2))
	{
		sjoin[i + c] = s2[c];
		c++;
	}
	sjoin[i + c] = '\0';
	return (sjoin);
}
