/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:49:21 by ampjimen          #+#    #+#             */
/*   Updated: 2023/09/16 19:54:49 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*buffer;

	buffer = (void *)malloc(size * nitems);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, size * nitems);
	return (buffer);
}

/*int main()
{
	
	char *a = ft_calloc(5, sizeof(char));
	a[0] = 'H';
	a[1] = 'o';
	a[2] = 'l';
	a[3] = 'a';
	a[4] = '\0';

	printf("%s", a);
	while(*a)
		(write(1, a, 1), a++);
}*/

