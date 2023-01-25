/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyuceba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:16:01 by osyuceba          #+#    #+#             */
/*   Updated: 2023/01/12 11:16:02 by osyuceba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	n;

	if (s == 0)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	n = ft_strlen(s + start);
	if (n < len)
		len = n;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == 0)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
