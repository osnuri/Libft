/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyuceba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:39:31 by osyuceba          #+#    #+#             */
/*   Updated: 2023/01/13 15:39:33 by osyuceba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_counter(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
			++i;
		while (*s && *s != c)
			++s;
	}
	return (i);
}

static void	ft_char_counter(char **str, char const *s, char c)
{
	char		**str1;
	const char	*s1;

	str1 = str;
	s1 = s;
	while (*s1)
	{
		while (*s == c)
			++s;
		s1 = s;
		while (*s1 && *s1 != c)
			++s1;
		if (*s1 == c || s1 > s)
		{
			*str1 = ft_substr(s, 0, s1 - s);
			s = s1;
			++str1;
		}
	}
	*str1 = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**newstr;
	int		size;

	if (!s)
		return (NULL);
	size = ft_word_counter(s, c);
	newstr = (char **)malloc(sizeof(char *) *(size + 1));
	if (!newstr)
		return (NULL);
	ft_char_counter(newstr, s, c);
	return (newstr);
}
