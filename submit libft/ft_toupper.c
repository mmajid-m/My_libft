/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:51:56 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/05/23 06:40:15 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	ch = ch - 32;
	return (ch);
}
/*
#include <stdio.h>
int main(void)
{
	int x;
	x = ft_toupper('L');
printf("$the returned value is <%d>$ \n", x);
}*/