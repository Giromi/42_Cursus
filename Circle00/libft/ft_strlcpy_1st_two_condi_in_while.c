/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_1st_two_condi_in_while.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 03:00:10 by minsuki2          #+#    #+#             */
/*   Updated: 2022/01/19 01:04:03 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize)
{
	size_t	i;
	size_t 	len;

	len = ft_strlen(src);
	if (dstsize > 0)
	{
		i = 0;
		while (src[i++] && dstsize-- - 1) 	// src[i++] : untill '\0'
			dst[i - 1] = src[i - 1];		// dstsize-- - 1 : except '\0'
		dst[i - 1] = '\0';
	}
	return (len);
}
