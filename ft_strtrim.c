/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:45:08 by akliek            #+#    #+#             */
/*   Updated: 2021/06/23 18:42:12 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	last_index(char const *s1, const char *set, size_t len)
{
	int i;
	int index;

	index = -1;
	i = 0;
	while (*s1)
	{
		if (ft_strncmp(s1, set, len) == 0)
			index = i;
		i++;
		s1++;
	}
	return (index);
}

static int	first_index(char const *s1, const char *set, size_t len)
{
	int i;

	i = 0;
	while (*s1)
	{
		if (ft_strncmp(s1, set, len) == 0)
			return (i);
		i++;
		s1++;
	}
	return (-1);
}

static char	*memory_allocate(int index[2], char *res, int len[2])
{
	if (index[0] == -1 || index[1] == -1)
		res = (char *)malloc(len[0] * sizeof(char));
	else if (index[0] == index[1])
		res = (char *)malloc((len[0] - len[1]) * sizeof(char));
	else
		res = (char *)malloc(len[0] - (2 * len[1]) * sizeof(char));
	return (res);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		index[2];
	int		len[2];
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	res = NULL;
	index[0] = first_index(s1, set, ft_strlen(set));
	index[1] = last_index(s1, set, ft_strlen(set));
	len[0] = ft_strlen(s1);
	len[1] = ft_strlen(set);
	res = memory_allocate(index, res, len);
	while (s1[j])
	{
		if (j == index[0] || j == index[1])
			j += len[1];
		res[i] = s1[j];
		i++;
		j++;
	}
	return (res);
}
