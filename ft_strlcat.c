/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:44:51 by akliek            #+#    #+#             */
/*   Updated: 2021/06/23 16:03:25 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = 0;
	dst_len = 0;
	while (src[src_len])
		src_len++;
	while (dst[dst_len])
		dst_len++;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (*dst && --dstsize)
		dst++;
	while (--dstsize)
		*dst++ = *src++;
	return (src_len + dst_len);
}
