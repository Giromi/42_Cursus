/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:43:32 by minsuki2          #+#    #+#             */
/*   Updated: 2021/12/15 13:56:20 by minsuki2         ###   ########.fr       */
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
	if (dstsize > dstLen + 1)
	{
		i += dstLen;
		while (i < dstsize)
			dst[i] = src[i];
		i++;
	}
	else
		return (dstsize + srcLen);
	return (dstLen + srcLen);
}
