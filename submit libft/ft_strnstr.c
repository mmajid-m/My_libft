/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:08:56 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/04 03:27:24 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] && haystack [i + j] && (i + j) < len
				&& haystack[i + j] == needle [j])
				j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
			i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char *str; 

	str = "ahmad al";
	char *s;
	 
	s = "l";

	printf("the returned the value : <%s>", ft_strnstr(str,s,4));
}*/