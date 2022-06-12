/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:44:44 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/04 03:26:30 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlen(const char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}*/
char	*ft_strrchr(const char	*s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i--;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	const char	*s;
	char	*ptr;
	char	to_find;

	s = "ooh! My Lord";
	to_find = 'h';
	ptr = ft_strrchr(s, to_find);
	char *str;
	str = strrchr(s , to_find);
	printf("string found  %s\n", ptr);
	printf("string found  %s\n", str);
	printf ("Last occurence of 'o' found at %ld.\n", ptr - s + 1);
	return (0);
}*/