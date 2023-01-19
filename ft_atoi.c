/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyuceba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:28:14 by osyuceba          #+#    #+#             */
/*   Updated: 2023/01/05 17:28:15 by osyuceba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	numb;
	int				sin;

	numb = 0;
	sin = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sin = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		numb = (numb * 10) + (*str - '0') * sin;
		str++;
		if (numb > 2147483647)
			return (-1);
		if (numb < -2147483648)
			return (0);
	}
	return (numb);
}
