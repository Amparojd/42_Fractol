/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:16:17 by ampjimen          #+#    #+#             */
/*   Updated: 2024/03/20 19:53:07 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ptnumber(int n, int *length)
{
	if (*length == -1)
		return ;
	if (n == -2147483648)
	{
		if (write (1, "-2147483648", 11) == -1)
			*length = -1;
		else
			(*length) += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar_length('-', length);
		ft_ptnumber(n * -1, length);
	}
	else
	{
		if (n > 9)
			ft_ptnumber(n / 10, length);
		if (*length != -1)
			ft_putchar_length(n % 10 + '0', length);
	}
}

void	ft_unsigned_int(unsigned int num, int *length)
{
	if (*length == -1)
		return ;
	if (num >= 10)
	{
		ft_unsigned_int(num / 10, length);
		ft_unsigned_int(num % 10, length);
	}
	else
		ft_putchar_length(num + '0', length);
}

void	ft_pthexa(unsigned long long num, char *base, int *length)
{
	if (*length == -1)
		return ;
	if (num >= 16)
	{
		ft_pthexa(num / 16, base, length);
		ft_pthexa(num % 16, base, length);
	}
	else
		ft_putchar_length(base[num], length);
}

/* int main(void)
{
	int n = -44534376;
	int length = 0;
	int *i = &length;
	unsigned int num = 4;
	int lengthu = 0;
	unsigned long long h = 222;
	int lengthh = 0;
	int *he = &lengthh;
	char base[] = "0123456789ABCDEF";
	int *iu = &lengthu;
	ft_ptnumber(n, i);
	printf("\n" "Length: %d\n", length);
	printf("\n\n");
	ft_unsigned_int(num, iu);
	printf("\n" "Length: %d\n", lengthu);
	printf("\n\n");
	ft_pthexa(h, base, he);
	printf("\n" "Length: %d\n", lengthh);
} */