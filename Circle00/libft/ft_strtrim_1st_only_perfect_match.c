/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 00:12:31 by minsuki2          #+#    #+#             */
/*   Updated: 2022/01/03 01:38:55 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_set(char *str, char *src, size_t str_len, size_t src_len);
static	char	*make_trim(char *dst, char *str, char *src, size_t dst_len, size_t src_len);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*pt;
	size_t	set_len;
	size_t	s1_len;
	size_t	final_len;
	size_t	i;


	i = 0;
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	if (s1 && set)
	{
		final_len = s1_len - count_set((char *)s1, (char *)set, s1_len, set_len) * set_len;
		pt = malloc(sizeof(char) * final_len + 1);
		if (pt)
			make_trim(pt, (char *)s1, (char *)set, final_len);
			pt[final_len] = '\0';
		return (pt);
	}
	return (NULL);
}

static	size_t	count_set(char *str, char *src, size_t str_len, size_t src_len)
{
	char	*pos;
	size_t	i;
	size_t	cnt;

	cnt = 0;
	i = 0;
	while (str[i++])
	{
		pos = ft_strnstr(&str[i - 1], src, str_len - i + 1);
		if (pos)
		{
			i = pos - str + src_len;
			if (dst)
			cnt++;
		}
	}
	return (cnt);
}

static	char	*make_trim(char *dst, char *str, char *src, size_t dst_len, size_t src_len)
{
	size_t	i;
	size_t	j;
	char	*tmp;

	i = 0;
	j = 0;
	tmp = src;
			count_set((char *)s1, (char *)set, s1_len, set_len)
	while (str[i++] && dst_len)
	{
		while (str[i + j] == src[j])
			j++;
		pos = ft_strnstr(&str[i - 1], src, str_len - i + 1);
		if (pos)
			n = pos - str;
			while (n--)
		else
		if (j == 
		{
			dst[j++] = str[i - 1];
			dst_len--;
		}
		i++;
		src = tmp;
	}
	return (dst);
}
