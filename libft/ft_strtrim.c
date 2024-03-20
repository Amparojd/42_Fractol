/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:25:49 by ampjimen          #+#    #+#             */
/*   Updated: 2023/10/03 17:49:43 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (ft_strrchr(set, s1[end]) && end > start)
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
}
/*int	main(void)
{
	char const	*str = "halal";
	char const	*str2 = "a";

	printf("%s", ft_strtrim(str, str2));
	return (0);
}*/
