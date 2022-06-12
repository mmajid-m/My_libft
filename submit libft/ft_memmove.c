/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:49:57 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/06 02:41:14 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
			d[len] = s[len];
		return (dst);
	}
	else
	{
		while (len--)
			*d++ = *s++;
		return (dst);
	}
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char csrc[100] = "Geeksfor";
    //memcpy(csrc + 5, csrc, strlen(csrc) + 1);
    //printf("%s\n", csrc);
	ft_memmove (csrc + 5, csrc, strlen(csrc) + 1);
    printf("%s\n", csrc);
	return 0;
}*/