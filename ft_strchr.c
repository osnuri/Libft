/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyuceba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:21:27 by osyuceba          #+#    #+#             */
/*   Updated: 2022/12/23 11:21:28 by osyuceba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;

	while (*str != '\0')
	{
		if (*str == c)
			return ((char *)str);
	str++;
	}
	if (c == 0)
		return (ptr);
	return (NULL);
}
