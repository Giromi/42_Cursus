/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_finish.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:43:32 by minsuki2          #+#    #+#             */
/*   Updated: 2022/01/01 23:36:52 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	offset_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	offset_len = 0;
	if (dst_len + 1 <= dstsize)
	{
		while (src[offset_len] && dst_len + offset_len < dstsize)
		{
			dst[dst_len + offset_len] = src[offset_len];
			offset_len++;
		}
		dst[(dst_len + offset_len) - 1] = '\0';
	}
	else
		dst_len = dstsize;
	return (dst_len + src_len);
}

