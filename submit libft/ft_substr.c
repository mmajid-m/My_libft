/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 19:20:19 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/09 19:22:11 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	size_t	y;
	char	*s2;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	s2 = (char *)malloc(sizeof(char ) * (len + 1));
	if (!s2)
		return (NULL);
	x = 0;
	y = 0;
	while (s[x] != '\0')
	{
		if (x >= start && y < len)
			s2[y++] = s[x];
		x++;
	}
	s2[y] = 0;
	return (s2);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main (void)
// {
// printf("%s",ft_substr("tripouille", 100, 1));
// }