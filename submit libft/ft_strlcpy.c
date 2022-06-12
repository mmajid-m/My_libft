/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:49:26 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/06 23:47:26 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == '\0')
	{
		while (src[i] != '\0')
		i++;
		return (i);
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
	dst[i] = '\0';
	while (src[i] != '\0')
	i++;
	return (i);
}
/*
#include<stdio.h>
#include <string.h>
int main(void)
{
  char dest[4] = "";
   char src[10] = "hala3amy";
printf("the returned value is <%zu>\n ", ft_strlcpy(dest, src, sizeof dest));
printf("%s", dest);
return (0);
}
*/