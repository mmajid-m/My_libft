/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 06:03:04 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/05 09:18:05 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

long	len(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	clone;

	clone = n;
	i = len (clone);
	str = malloc(sizeof (char) * (i + 1));
	if (!str)
		return (0);
	str [i--] = '\0';
	if (clone == 0)
		str[0] = 48;
	if (clone < 0)
		clone *= -1;
	while (i >= 0)
	{
		str[i] = 48 + clone % 10;
		clone /= 10;
		i--;
	}
	if (n < 0)
		str [0] = '-';
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	// int n = -2147483648;
//  	// printf("the n is :%d\n", 018);
// 	// n *= -1;
// 	// printf("the new n is :%d\n", n);
// return (0);
// }
