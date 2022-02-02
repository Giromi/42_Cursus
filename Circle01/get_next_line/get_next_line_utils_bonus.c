/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:02:34 by minsuki2          #+#    #+#             */
/*   Updated: 2022/02/02 18:17:00 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;

	len = 0;
	while (s1[len])
		len++;
	dup = (char *)malloc(sizeof(char) * len + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s1, len + 1);
	return (dup);
}

void	ft_lstadd_newstr_back(t_list **lst, char *content)
{
	t_list	*tmp;
	t_list	*new;

	if (!lst || !content)
		return ;
	new = malloc(sizeof(t_list));
	if (!new)
		return ;
	new->content = content;
	new->next = NULL;
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

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
