/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_finish.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 00:12:31 by minsuki2          #+#    #+#             */
/*   Updated: 2022/01/12 15:06:16 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_size(char const *s, char const *set, size_t *i);
static size_t	cmp_set(char const *str, char const *set, size_t set_size);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	size;
	size_t	i;
	size_t	idx;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	idx = 0;
	size = check_size(s1, set, &idx) + 1;
	dst = malloc(sizeof(char) * size);
	if (!dst)
		return (NULL);
	dst[size] = '\0';
	while (s1[idx] && size-- - 1)
		dst[i++] = s1[idx++];
	return (dst);
}

static size_t	check_size(char const *s, char const *set, size_t *idx)
{
	size_t	s_idx;
	size_t	e_idx;
	size_t	len;
	size_t	set_len;

	s_idx = 0;
	e_idx = ft_strlen(s) - 1;
	set_len = ft_strlen(set);
	while (s[e_idx] && cmp_set(&s[e_idx], set, set_len) < set_len)
		e_idx--;
	while (s[s_idx] && cmp_set(&s[s_idx], set, set_len) < set_len)
		s_idx++;
	len = e_idx - s_idx + 1;
	*idx = s_idx;
	return (len);
}

static size_t	cmp_set(char const *str, char const *set, size_t set_len)
{
	size_t	i;

	i = 0;
	while (*str != set[i] && set_len--)
		i++;
	return (i);
}
