/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:16:11 by ampjimen          #+#    #+#             */
/*   Updated: 2024/03/20 19:53:18 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_length(char c, int *length)
{
	if (write(1, &c, 1) == -1)
		*length = -1;
	else
		*length = *length +1;
}

void	ft_putstr(char *s, int *length)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)", length);
		return ;
	}
	while (s[i] != '\0')
	{
		ft_putchar_length(s[i], length);
		if (*length == -1)
			return ;
		i++;
	}
}

/*int main(void)
{
	char a = 'h';
	//int *i = malloc(sizeof(int));
	int length = 0;
	
	int *i = &length;

	// if (i == NULL)
	//{
		//printf("Error, no se pudo asignar memoria");
		//return (0);
	//} 
	
	char *str = "hola";
	int lengths = 0;
	
	int *m = &lengths;
	
	ft_putchar_length(a, i);
	printf("\n" "Length: %d\n", length);
	ft_putstr(str, m);
	printf("\n" "El length de str es: %d\n", lengths);
	return 0;
}*/