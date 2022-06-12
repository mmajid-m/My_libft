/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:50:54 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/05/23 06:40:11 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
	ch = ch + 32;
	return (ch);
}
/*
#include <stdio.h>
int main(void)
{
	int	x;
	x = ft_tolower('a');
printf("$the returned value is <%d>$ \n", x);
}
*/