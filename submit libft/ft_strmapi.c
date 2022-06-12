/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 09:18:34 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/11 20:09:30 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f((int) i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}

//printf("My function: index = %d and %c\n", i, s2);
// char	f (unsigned int i, char s2)
// {
// 	return (s2);
// }
/*
int main(void)
{
	char	*s2 = "Hello";
	char	*result;
	printf("The result is %s\n", s2);
	result = ft_strmapi(s2, f);
	printf("The result is %s\n", result);
	return (0);
}*/