/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:44:54 by akliek            #+#    #+#             */
/*   Updated: 2021/06/23 16:03:33 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	res;

	res = 0;
	while (src[res])
		res++;
	if (dstsize == 0)
		return (res);
	while (--dstsize)
		*dst++ = *src++;
	*dst = '\0';
	return (res);
}
