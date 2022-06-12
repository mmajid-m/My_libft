/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:48:12 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/01 19:46:37 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	d;

	d = ft_strlen(dst);
	while (dstsize <= d)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (src[i] && d + 1 < dstsize)
	{
		dst[d] = src[i];
		d++;
		i++;
	}
	dst[d] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
/*
int	main(void)
{
	char	*dst;
	char	dest[100];
	char	*src;
	int	index;

	dst = "Hello";
	src = " World";
	index = 0;
	while (index < 6)
	{
		dest[index] = dst[index];
		index++;
	}
	printf("ft : (%zu) $%s$\n", ft_strlcat(dest, src, 9), dest);
}
*/