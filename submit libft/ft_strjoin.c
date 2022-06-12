/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 04:06:10 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/06 02:34:15 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*new_str;

	if (!s1 || !s2)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && i <= len1)
	{
		new_str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0' && i <= len2)
		new_str[len1++] = s2[i++];
	new_str[len1] = '\0';
	return (new_str);
}
/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
 
  char str [10] = "ali";
  char ptr [10] = "alaa";
  char * new_string = ft_strjoin( str,ptr );
  printf("%s",new_string);
}*/