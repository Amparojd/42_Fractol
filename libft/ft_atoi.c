/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:50:37 by ampjimen          #+#    #+#             */
/*   Updated: 2023/09/18 18:49:59 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	int				i;
	int				neg;
	unsigned long	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - 48) + (res * 10);
		if (res > (unsigned long)LONG_MAX && neg == -1)
			return (0);
		if (res > (unsigned long)LONG_MAX && neg == 1)
			return (-1);
		i++;
	}
	return (res * neg);
}

/*int	main(void)
{
	char	str[] = "  -12345c abc";
	char str2[] = " 9223372045654645645645636854775809";

	printf("%d", ft_atoi(str));
	printf("\n%d", ft_atoi(str2));
	printf("\n%d", atoi(str2));
}*/
