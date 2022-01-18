/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_finish.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 00:11:55 by minsuki2          #+#    #+#             */
/*   Updated: 2022/01/17 17:24:11 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *str, char c);
static char		*make_ptr(char const *s, size_t *k, char c);
static char		**ft_error_malloc(char **str, size_t D2_size);

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	ea;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	ea = count_words(s, c);
	if (ea <= 0)
		return (NULL);
	ptr = malloc(sizeof(char *) * (ea + 1));
	if (!ptr)
	{
		ft_error_malloc(ptr, ea + 1);
		return (NULL);
	}
	while (i++ < ea)
	{
		while (s[j] == c)
			j++;
		ptr[i - 1] = make_ptr(s, &j, c);
	}
	ptr[ea] = NULL;
	return (ptr);
}

static size_t	count_words(char const *str, char c)
{
	char	*pos;
	size_t	i;
	size_t	cnt;

	cnt = 0;
	i = 0;
	while (str[i++])
	{
		pos = ft_strchr(&str[i - 1], c);
		if (pos)
		{
			i = pos - str + 1;
			if (!(str[i] == c || str[i] == '\0'))
				cnt++;
		}
	}
	if (*str != c)
		cnt++;
	return (cnt);
}

static char	*make_ptr(char const *s, size_t *k, char c)
{
	size_t	idx;
	char	*dst;

	idx = *k;
	while (s[(*k)++])
		if (s[*k - 1] == c)
			break ;
	dst = ft_substr(s, idx, (*k - 1) - idx);
	return (dst);
}

static char	**ft_error_malloc(char **str, size_t D2_size)
{
	size_t	idx;

	idx = 0;
	while (idx + 1 < D2_size)
		free(str[idx++]);
	free(str);
	return (NULL);
}
