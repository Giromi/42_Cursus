/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 03:00:10 by minsuki2          #+#    #+#             */
/*   Updated: 2022/01/18 18:06:11 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t 	size;

	size = ft_strlen(src);
	if (dstsize <= 0)
		return (size);
	i = 0;
	while (src[i++] && dstsize-- - 1)
		dst[i - 1] = src[i - 1];
	dst[i] = '\0';
	return (size);
}
