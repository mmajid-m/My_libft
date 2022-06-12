/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:04:18 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/04 05:39:47 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		((char *)s)[count] = 0;
		count++;
	}
}

// #include <stdio.h>

// int    main(void)
// {
// 	int	j;
// 	int i;
//     size_t	x;
//     int *ft_buff;
//     int y;

//     y = 12;
//     ft_buff = malloc(sizeof(*ft_buff)*y);
//     x = 9;
//     i = 1;
//     j = 0;
//     ft_bzero(ft_buff, sizeof(*ft_buff)*x);
//     while (j < y)
// 	{
// 		while (j >= x && j < y)
// 		{
//             ft_buff[j] = i;
//             printf("%d", ft_buff[j]);
//             i++;
//             j++;
// 			}
//         if (j == y)
//           break;
//         printf("%d", ft_buff[j]);
//         j++;
// 	}
//     return (0);
// }
