/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtodouble.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:12:35 by ampjimen          #+#    #+#             */
/*   Updated: 2024/03/20 20:14:05 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_strtodouble(char *s)
{
	double	nbr;
	int		negative;
	int		i;

	nbr = 0.0;
	negative = 0;
	i = 0;
	while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
		i++;
	if (s[i] == '-')
	{
		negative = 1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		nbr = nbr * 10.0 + (s[i] - '0');
		i++;
	}
	return (ft_strtod_helper(s, nbr, negative, i));
}

double	ft_strtod_helper(char *s, double nbr, int negative, int i)
{
	double	divisor;

	if (s[i] == '.')
	{
		divisor = 10.0;
		i++;
		while (s[i] >= '0' && s[i] <= '9')
		{
			nbr = nbr + (s[i] - '0') / divisor;
			divisor *= 10.0;
			i++;
		}
		if ((s[i] >= 'a' && s[i] <= 'z')
			|| (s[i] >= 'A' && s[i] <= 'Z')
			|| s[i] == '.')
			return (0.0);
	}
	if (negative)
		nbr = -nbr;
	return (nbr);
}
