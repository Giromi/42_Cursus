/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_finish.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:43:32 by minsuki2          #+#    #+#             */
/*   Updated: 2022/01/02 02:58:57 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	offset_len;
	size_t	n;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	n = dstsize - dst_len;
	offset_len = 0;
	if (n >= 1)
		while (src[offset_len++] && n-- -1)
			dst[dst_len - 1 + offset_len] = src[offset_len - 1];
	else
		dst_len = dstsize;
	dst[dst_len - 1 + offset_len] = '\0';
	return (dst_len + src_len);
}

