/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 04:57:30 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/11 18:55:43 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*str;

	if (count != 0 && size != 0 && count > SIZE_MAX / size)
		return (NULL);
	str = malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}

// #include <stdio.h>

// int	main()
// {
// 	void *expected = calloc(SIZE_MAX, SIZE_MAX);
// 	void *actual = ft_calloc(SIZE_MAX, SIZE_MAX);
// 	if (actual != expected)
// 		printf("OOPS\n");
// }