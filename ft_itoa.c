/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:43:36 by akliek            #+#    #+#             */
/*   Updated: 2021/06/23 15:55:30 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n, int len)
{
	while (n >= 1)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = 0;
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	len = num_len(n, len);
	res = (char *)malloc(len * sizeof(char));
	while (--len >= 0 && n >= 1)
	{
		res[len] = n % 10 + 48;
		n /= 10;
	}
	if (len == 0)
		res[0] = '-';
	return (res);
}
