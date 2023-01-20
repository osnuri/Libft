/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyuceba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:28:35 by osyuceba          #+#    #+#             */
/*   Updated: 2023/01/12 11:31:34 by osyuceba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*ptr;

	size = ft_strlen(s) + 1;
	ptr = (char *)malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);
	return ((char *)ft_memcpy(ptr, s, size));
}
