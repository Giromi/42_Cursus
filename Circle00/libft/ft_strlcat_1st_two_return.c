/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:43:32 by minsuki2          #+#    #+#             */
/*   Updated: 2021/12/15 18:46:30 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstLen;
	size_t	srcLen;
	size_t	i;

	dstLen = ft_strlen(dst);
	srcLen = ft_strlen(src);
	i = 0;
	if (dstsize >= dstLen + 1)
	{
		while (i + dstLen < dstsize && src[i])
		{
			dst[i + dstLen] = src[i];
			i++;
		}
		dst[i + dstLen - 1] = '\0';
		return (dstLen + srcLen);
	}
	return (dstsize + srcLen);
}
