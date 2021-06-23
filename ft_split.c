/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:44:41 by akliek            #+#    #+#             */
/*   Updated: 2021/06/23 18:40:19 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_splits(char const *s, char c)
{
	int splits;
	int check;
	int i;

	i = 0;
	check = 0;
	splits = 1;
	while (s[i])
	{
		if (s[i] != c)
			check = 1;
		if (s[i] == c && check == 1)
		{
			check = 0;
			splits++;
		}
		i++;
	}
	if (s[i - 1] == c)
		splits--;
	return (splits);
}

static int	memory(char const *s, char c)
{
	int i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

static char	*ft_strccpy(char const *s1, char *s2, char c)
{
	while (*s1 && *s1 != c)
	{
		*s2 = *s1;
		s2++;
		s1++;
	}
	return (s2);
}

char		**ft_split(char const *s, char c)
{
	char	**res;
	int		j;
	int		splits;

	j = 0;
	if (!s)
		return (NULL);
	res = (char **)malloc(count_splits(s, c) * sizeof(char *) + 1);
	splits = count_splits(s, c);
	while (j < splits)
	{
		if (memory(s, c) > 0)
		{
			res[j] = (char *)malloc(memory(s, c) * sizeof(char));
			ft_strccpy(s, res[j], c);
			while (*s && *s != c)
				s++;
			j++;
		}
		while (*s == c)
			s++;
	}
	return (res);
}
