/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:00:16 by minsuki2          #+#    #+#             */
/*   Updated: 2022/02/02 21:05:00 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static ssize_t	line_check_len(int fd, t_list **lst, size_t *len);
static void		ft_lstfclean(t_list **lst);
static char		*make_line(t_list **lst, size_t line_len);
static ssize_t	read_check(int fd, t_list **lst);

char 	*get_next_line_bonus(int fd)
{
	static t_list	*fd_lst[FD_MAX];
	ssize_t			rd;
	size_t			line_len;
	char			*line;

	if (fd < 0 || fd > FD_MAX || BUFFER_SIZE <= 0 || FD_MAX <= 0)
		return (NULL);
	line_len = 0;
	rd = line_check_len(fd, &fd_lst[fd], &line_len);
	if (rd == -1 || (!rd && !line_len))
	{
		ft_lstfclean(&fd_lst[fd]);
		return (NULL);
	}
	line = make_line(&fd_lst[fd], line_len);
	return (line);
}

static ssize_t	line_check_len(int fd, t_list **lst, size_t *len)
{
	char			*pos;
	t_list			*tmp;
	ssize_t			rd;

	tmp = ft_lstlast(*lst);
	if (*lst)
	{
		pos = ft_strchr_len(tmp->content, '\n');
		if (pos)
		{
			*len += (pos - tmp->content) + 1;
			return (0);
		}
		while (tmp->content[*len])
			(*len)++;
	}
	rd = read_check(fd, lst);
	if (rd > 0)
		line_check_len(fd, lst, len);
	return (rd);
}

static ssize_t	read_check(int fd, t_list **lst)
{
	char	*buf;
	ssize_t	rd;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
	{
		ft_lstfclean(lst);
		return (-1);
	}
	rd = read(fd, buf, BUFFER_SIZE);
	if (rd > 0)
	{
		buf[rd] = '\0';
		ft_lstadd_newstr_back(lst, buf);
	}
	else
		free(buf);
	return (rd);
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
	last = ft_strdup(ft_strchr_len(last, '\n') + 1);
	ft_lstfclean(&first);
	ft_lstadd_newstr_back(lst, last);
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
		if ((*lst)->content)
			free((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
}
