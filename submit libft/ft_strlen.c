/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:50:20 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/11 14:12:00 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

/*
#include <stdio.h>

int main() 
{ 
   	int len1, len2;
	char string1[] = "123156";
	char string2[] = {'M','o','T','A','s','E','m','\0'};

	len1 = ft_strlen(string1);
	len2 = ft_strlen(string2);
	printf("Length of string1 is: %d \n", len1);
	printf("Length of string2 is: %d \n", len2);
}
*/