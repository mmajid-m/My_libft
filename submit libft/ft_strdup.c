/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 06:33:37 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/07 01:26:50 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	int		size;
	int		i;
	char	*str;

	size = 0;
	while (s1[size])
		size++;
	str = malloc (sizeof(char ) * size + 1);
	if (!str)
		return (0);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	*ft_strdup( char *s1)
{
	int		size;
	int		i;
	char	*str;

	i = 0;
	while (s1[i] != '\0')
		i++;
	str = (char *)malloc (sizeof(char) * i + 1);
	if (str == 0)
		return (0);
	size = 0;
	while (s1[size] != '\0')
	{
		str[size] = s1[size];
		size++;
	}
	str[size] = '\0';
	return (str);
}
*/
/*int	main(void)
{
	printf("%s\n", ft_strdup("thisismystring"));
	printf("<%s>\n", ft_strdup("thisismystring"));
	printf("%s\n", ft_strdup("thisismystring   another  ne "));
	printf("%s\n", strdup("     thisis  mystri n g"));
	return (0);
}*/
