/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:45:03 by akliek            #+#    #+#             */
/*   Updated: 2021/06/23 16:04:11 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needl, size_t len)
{
	size_t	i;
	size_t	j;

	while (*haystack && len--)
	{
		i = 0;
		j = len + 1;
		while (haystack[i] == needl[i] && j--)
			i++;
		if (i == ft_strlen(needl))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
