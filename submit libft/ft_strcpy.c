/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:47:32 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/05/23 06:37:10 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s2)
	{
		s1[i] = s2[i];
		++i;
	}
	s1[i] = '\0';
	return (s1);
}
/*
#include <stdio.h>

 int  main(void)
 {
	 char src[] = "Waffles";
	 char dst[] = "Pancakes";
	 printf("%s\n", src);
	 printf("%s\n", dst);
	 ft_strcpy(dst, src);
	 printf("After copying: %s\n", dst);
 }*/
