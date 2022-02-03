/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:02:34 by minsuki2          #+#    #+#             */
/*   Updated: 2022/02/03 05:49:38 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strlen_chr(const char *s, int c, size_t *len)
{
	size_t	i;

	while (s[*len])
		(*len)++;
	i = 0;
	while (c && i++ < *len)
		if (s[i - 1] == (char)c)
			return ((char *)s + i - 1);
	return (NULL);
}

size_t	ft_strlcpy_only_size(char *dst, char const *src, size_t src_size)
{
	if (src_size > 0)
	{
		dst[src_size - 1] = '\0';
		while (src_size-- - 1)
			dst[src_size - 1] = src[src_size - 1];
	}
	return (src_size);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;

	if (!s1)
		return (NULL);
	len = 0;
	ft_strlen_chr(s1, 0, &len);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	ft_strlcpy_only_size(dup, s1, len + 1);
	return (dup);
}

t_list	*ft_lstadd_back_last(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return (NULL);
	if (!*lst)
		*lst = new;
	else
	{
		tmp = *lst;
		while (tmp->next)
			 tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}

t_list	*ft_lstnew_str(char *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
