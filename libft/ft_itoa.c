/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:41:48 by ampjimen          #+#    #+#             */
/*   Updated: 2023/10/03 17:46:47 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_numlen(int num)
{
	unsigned int	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		len += 1;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	unsigned int	len;

	len = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	while (num != 0)
	{
		str[len -1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (str);
}

/*int	main(void)
{
	int	n = 22;

	printf("%s", ft_itoa(n));
	return (0);
}*/



static unsigned int ft_numlen(int num)
{
    unsigned int len;

    len = 0;

    // Si num es igual a 0, la longitud es 1
    if (num == 0)
        return (1);

    // Si num es negativo, agregamos 1 a la longitud
    if (num < 0)
        len += 1;

    // Mientras num no sea 0, dividimos num por 10 y aumentamos la longitud
    while (num != 0)
    {
        num /= 10;
        len++;
    }

    // Devuelve la longitud final
    return (len);
}

char *ft_itoa(int n)
{
    char *str;
    unsigned int num;
    unsigned int len;

    // Obtiene la longitud del número
    len = ft_numlen(n);

    // Asigna memoria para la cadena (más uno para el carácter nulo)
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);

    // Si el número es negativo, el primer carácter es '-'
    if (n < 0)
    {
        str[0] = '-';
        num = -n;
    }
    else
        num = n;

    // Si el número es 0, el primer carácter es '0'
    if (num == 0)
        str[0] = '0';

    // Coloca el carácter nulo al final de la cadena
    str[len] = '\0';

    // Construye la cadena al revés
    while (num != 0)
    {
        str[len - 1] = (num % 10) + '0';  // Convierte el dígito en carácter y colócalo en la cadena
        num = num / 10;
        len--;
    }

    // Devuelve la cadena resultante
    return (str);
}
