/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:00:16 by minsuki2          #+#    #+#             */
/*   Updated: 2022/02/03 23:30:54 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static ssize_t	line_check_len(int fd, t_list **lst, size_t *len);
static void		*ft_lstfclean(t_list **lst);
static char		*make_line(t_list **lst, size_t line_len);
static t_list	*read_check(int fd, t_list **lst, ssize_t *rd);

char	*get_next_line(int fd)
{
	static t_list	*fd_lst;
	ssize_t			rd;
	size_t			line_len;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line_len = 0;
	rd = line_check_len(fd, &fd_lst, &line_len);
	if (rd == -1 || (!rd && !line_len))
		return ((char *)ft_lstfclean(&fd_lst));
	return (make_line(&fd_lst, line_len));
}

static ssize_t	line_check_len(int fd, t_list **lst, size_t *len)
{
	char			*pos;
	t_list			*tmp;
	ssize_t			rd;
	size_t			content_len;

	if (*lst)
	{
		content_len = 0;
		pos = ft_strlen_chr((*lst)->content, '\n', &content_len);
		if (pos)
		{
			*len += (pos - (*lst)->content) + 1;
			return (0);
		}
		(*len) += content_len;
	}
	tmp = read_check(fd, lst, &rd);
	if (tmp)
		rd = line_check_len(fd, &tmp, len);
	return (rd);
}

static t_list	*read_check(int fd, t_list **lst, ssize_t *rd)
{
	char	*buf;
	t_list	*last;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	*rd = read(fd, buf, BUFFER_SIZE);
	if (*rd > 0)
	{
		buf[*rd] = '\0';
		last = ft_lstadd_back_last(lst, ft_lstnew_str(ft_strdup(buf)));
	}
	else
		last = NULL;
	if (buf)
		free(buf);
	return (last);
}

static char	*make_line(t_list **lst, size_t line_len)
{
	char	*line;
	char	*last;
	t_list	*first;
	size_t	i;

	line = (char *)malloc(sizeof(char) * (line_len + 1));
	if (!line)
		return (NULL);
	first = *lst;
	i = 0;
	while (*lst)
	{
		ft_strlen_chr(line, 0, &i);
		ft_strlcpy_only_size(line + i, (*lst)->content, line_len + 1 - i);
		if (!(*lst)->next)
			last = (*lst)->content;
		*lst = (*lst)->next;
	}
	last = ft_strlen_chr(last, '\n', &i);
	if (last && *(last + 1))
		*lst = ft_lstnew_str(ft_strdup(last + 1));
	ft_lstfclean(&first);
	return (line);
}

static void	*ft_lstfclean(t_list **lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	while (*lst)
	{
		tmp = (*lst)->next;
		free((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	return (NULL);
}
