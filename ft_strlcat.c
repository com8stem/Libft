/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kishizu <kishizu@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:59:11 by kishizu           #+#    #+#             */
/*   Updated: 2023/10/03 20:33:06 by kishizu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	move(char *x, const char *y, size_t size_c)
{
	size_t	dest_len_c;
	size_t	src_len_c;
	size_t	j;

	j = 0;
	dest_len_c = ft_strlen(x);
	src_len_c = ft_strlen(y);
	while (j < size_c - dest_len_c - 1 && y[j] != '\0')
	{
		x[dest_len_c + j] = y[j];
		j++;
	}
	x[dest_len_c + j] = '\0';
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;

	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src) + dstsize);
	dest_len = ft_strlen((const char *)dst);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	if (dstsize <= dest_len)
		return (src_len + dstsize);
	move(dst, src, dstsize);
	return (total_len);
}
