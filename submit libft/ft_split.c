/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajid-m <mmajid-m@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 23:11:33 by mmajid-m          #+#    #+#             */
/*   Updated: 2022/06/11 12:59:22 by mmajid-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	if (!s || s[0] == '\0')
		return (0);
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		if ((s[i] == c && s[i + 1] != c && s[i + 1] != '\0'))
			cnt++;
		i++;
	}
	return (cnt + 1);
}
	// if (s[0] == '\0')
	// {
	// 	split = malloc(sizeof(char *));
	// 	split[0] = NULL;
	// 	return (split);
	// }

char	**ft_split(char const *s, char c)
{
	int		i[3];
	char	**split;

	if (!s)
		return (0);
	split = (char **)malloc((count_words((char *)s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	i[0] = -1;
	i[1] = 0;
	i[2] = -1;
	while (++i[0] <= (int)ft_strlen(s))
	{
		if (s[i[0]] != c && i[2] < 0)
			i[2] = i[0];
		else if ((s[i[0]] == c || i[0] == (int)ft_strlen(s)) && i[2] >= 0)
		{
			split[i[1]++] = ft_substr(s, i[2], i[0] - i[2]);
			i[2] = -1;
		}
	}
	split[i[1]] = NULL;
	return (split);
}
// #include <stdio.h>
// // #include <stdio.h>
// int    main(void)
// {
//     int        i;
//     char    **tab;

//     i = 0;
//     tab = ft_split("  tripouille  42  ", ' ');
//     while (i < 3)
//     {
//         printf("string %d : %s\n", i, tab[i]);
//         i++;
//     }

// 	printf("Count words returns: %d\n", count_words("  tripouille  42  ", ' '));
//     return (0);
// }