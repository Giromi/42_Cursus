/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:20:15 by minsuki2          #+#    #+#             */
/*   Updated: 2022/02/01 03:14:50 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	line_check_len(int fd, t_list **lst, size_t *left_len);
static void		ft_lstfclean(t_list **lst);
static char		*make_line(t_list **lst, size_t line_len, size_t left_len);

char 	*get_next_line(int fd)
{
	// static t_list	*fd_lst[FD_MAX];
	static t_list	*fd_lst[FD_MAX];
	char 			*line;
	size_t			line_len;
	size_t			left_len;

	if (fd <= 0 || BUFFER_SIZE <= 0 || FD_MAX <= 0)
		return (NULL);
	// fd_lst = (t_list **)malloc(sizeof(t_list *) * FD_MAX);
	// if (!fd_lst)
	//     return (NULL);
	left_len = 0;
	line = NULL;
	if (fd_lst[fd])
		line = ft_strchr_len(fd_lst[fd]->content, '\n');
	if (!line)
		line_len = line_check_len(fd, &fd_lst[fd], &left_len);
	else
		line_len = line - fd_lst[fd]->content + 1;
	if (!line_len)
		return (NULL);
	line = make_line(&fd_lst[fd], line_len, left_len);
	return (line);
}

static size_t	line_check_len(int fd, t_list **lst, size_t *left_len)
{
	char			*pos;
	size_t			rd;
	size_t			len;
	char			*buf;

	pos = NULL;
	len = 0;
	if ((*lst))
		while ((*lst)->content[len])
			len++;
	while (!pos)
	{
		buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!buf)
			return (0);
		rd = read(fd, buf, BUFFER_SIZE);
		if (!rd)
			break;
		buf[rd] = '\0';
		pos = ft_strchr_len(buf, '\n');
		len += rd;
		if (pos)
		{
			*left_len = rd - (pos - buf + 1);
			len -= *left_len;
		}
		ft_lstadd_back(lst, ft_lstnew_str(buf));
	}
	// free(buf);
	return (len);
}

static char	*make_line(t_list **lst, size_t line_len, size_t left_len)
{
	char	*line;
	char	*last;
	t_list	*first;
	size_t	i;

	line = (char *)malloc(sizeof(char) * (line_len + 1));
	if (!line)
		return (NULL);
	first = *lst;
	while (*lst)
	{
		i = 0;
		while (line[i])
			i++;
		ft_strlcpy(line + i, (*lst)->content, line_len + 1 - i);
		if (!(*lst)->next)
			last = (*lst)->content;
		*lst = (*lst)->next;
	}
	last = ft_substr(last, line_len - i, left_len);
	ft_lstfclean(&first);
	*lst = ft_lstnew_str(last);
	// ft_lstadd_back(&lst, ft_lstnew_str(last));
	return (line);
}

static void	ft_lstfclean(t_list **lst)
{
	t_list	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		free((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
}
