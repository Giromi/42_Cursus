/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:04:11 by minsuki2          #+#    #+#             */
/*   Updated: 2022/02/01 03:24:15 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr_len(const char *s, int c)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	i = 0;
	while (i++ < len)
		if (s[i - 1] == (char)c)
			return ((char *)s + i - 1);
	return (NULL);
}

size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize)
{
	size_t	len;

	len = 0;
	while (src[len])
		len++;
	if (dstsize > 0)
	{
		if (len + 1 < dstsize)
			dstsize = len + 1;
		dst[dstsize - 1] = '\0';
		while (dstsize-- - 1)
			dst[dstsize - 1] = src[dstsize - 1];
	}
	return (len);
}


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = 0;
	while (s[s_len])
		s_len++;
	if (start >= s_len)
		len = 0;
	if (len >= s_len)
		len = s_len;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		tmp = *lst;
		while (tmp->next)
			 tmp = tmp->next;
		tmp->next = new;
	}
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
