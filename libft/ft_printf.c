/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:15:58 by ampjimen          #+#    #+#             */
/*   Updated: 2024/03/20 19:53:01 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_check_type(va_list args, const char str, int *length)
{
	if (str == 'c')
		ft_putchar_length(va_arg(args, int), length);
	else if (str == 's')
		ft_putstr(va_arg(args, char *), length);
	else if (str == '%')
		ft_putchar_length('%', length);
	else if (str == 'd' || str == 'i')
		ft_ptnumber(va_arg(args, int), length);
	else if (str == 'u')
		ft_unsigned_int(va_arg(args, unsigned int), length);
	else if (str == 'x')
		ft_pthexa(va_arg(args, unsigned int), "0123456789abcdef", length);
	else if (str == 'X')
		ft_pthexa(va_arg(args, unsigned int), "0123456789ABCDEF", length);
	else if (str == 'p')
	{
		ft_putstr("0x", length);
		if (*length != -1)
			ft_pthexa(va_arg(args, unsigned long long),
				"0123456789abcdef", length);
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_check_type(args, str[i + 1], &length);
			i++;
		}
		else
			ft_putchar_length(str[i], &length);
		i++;
		if (length < 0)
			return (va_end(args), -1);
	}
	va_end(args);
	return (length);
}
