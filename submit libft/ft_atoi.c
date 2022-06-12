/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:29:29 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/11 18:47:22 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	unsigned int	s_i;
	int				sign;

	sign = 1;
	i = 0;
	s_i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		++i;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		s_i = s_i * 10 + str[i++] - '0';
	if (s_i > 2147483648 && sign == 1)
		return (-1);
	if (s_i > 2147483648 && sign == -1)
		return (0);
	return (s_i * sign);
}
/*
#include <stdio.h>
int main(void)
{
	printf("the returned value <%d>\n", ft_atoi("hello"));
	printf("the returned value <%d>", ft_atoi("h"));
	return(0);
}
*/