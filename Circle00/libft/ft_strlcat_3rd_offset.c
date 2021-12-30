/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_3rd_.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:43:32 by minsuki2          #+#    #+#             */
/*   Updated: 2021/12/15 22:48:22 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstLen;
	size_t	srcLen;
	size_t	offsetLen;

	dstLen = ft_strlen(dst);
	srcLen = ft_strlen(src);
	offsetLen = 0;
	if (dstLen + 1 <= dstsize)
	{
		while (dstLen + offsetLen < dstsize && src[offsetLen - 1])
		{
			dst[dstLen + offsetLen - 1] = src[offsetLen];
			offsetLen++;
		}
		dst[(dstLen + offsetLen) - 1] = '\0';
	}
	else
		dstLen = dstsize;
	return (dstLen + srcLen);
}

