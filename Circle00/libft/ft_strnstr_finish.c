/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_finish.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:31:24 by minsuki2          #+#    #+#             */
/*   Updated: 2022/01/17 18:21:42 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	size_t	j;

	i = 0;
	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *)haystack);
	while (haystack[i] && len-- - 1)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
			j++;
		if (j == needle_len || j == needle_len + 1)
			return (&((char *)haystack)[i]);
		i++;
	}
	return (NULL);
}
