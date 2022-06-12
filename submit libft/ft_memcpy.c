/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:46:45 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/06 01:40:29 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == src || n == 0)
		return (dst);
	i = 0;
	while (i < n)
	{
		((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return ((char *)dst);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "laban";
  char dest[50] = "yoghurt" ;
   //strcpy(dest,"l");

  // printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}*/