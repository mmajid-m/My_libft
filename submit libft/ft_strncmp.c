/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:51:18 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/01 20:11:59 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i]
			|| !(unsigned char)s1[i]
			|| !(unsigned char)s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		++i;
	}
	return (0);
}
/*
int main(void)
{
	char	*str1;
	char	*str2;
	int	nb;

    nb = 8;
    str1 = "haloolll";
    str2= "haloa";
	printf("the returned value is <%d>\n", ft_strncmp("test\200", "test\0", 6));
	return (0);
}*/
