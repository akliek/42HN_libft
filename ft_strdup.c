/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:44:46 by akliek            #+#    #+#             */
/*   Updated: 2021/06/23 16:03:04 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	res = (char *)malloc(ft_strlen(s1) * sizeof(char));
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	return (res);
}
