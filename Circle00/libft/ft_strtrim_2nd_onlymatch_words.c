/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_finish.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 00:12:31 by minsuki2          #+#    #+#             */
/*   Updated: 2022/01/03 16:42:14 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_make(char *dst, const char *str,
		const char *src, unsigned long *j);

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*ptr;
	size_t			set_cnt;
	size_t			s1_len;
	size_t			final_len;
	unsigned long	i;

	ptr = NULL;
	s1_len = ft_strlen(s1);
	i = 0;
	if (s1 && set)
	{
		set_cnt = count_make(ptr, s1, set, &i);
		final_len = s1_len - set_cnt * ft_strlen(set);
		ptr = malloc(sizeof(char) * final_len + 1);
		if (ptr)
		{
			count_make(ptr, s1, set, &i);
			ptr[i] = '\0';
			if (final_len == i)
				return (ptr);
		}
	}
	return (NULL);
}

static size_t	count_make(char *dst, const char *str,
		const char *src, unsigned long *j)
{
	char	*pos;
	size_t	bf_i;
	size_t	i;
	size_t	cnt;

	bf_i = 0;
	cnt = 0;
	i = 0;
	while (str[i++])
	{
		pos = ft_strnstr(&str[i - 1], src, ft_strlen(str) - i + 1);
		if (pos)
		{
			i = pos - str;
			if (dst)
				while (bf_i < i)
					dst[(*j)++] = str[bf_i++];
			i += ft_strlen(src);
			cnt++;
		}
		bf_i = i;
	}
	return (cnt);
}
