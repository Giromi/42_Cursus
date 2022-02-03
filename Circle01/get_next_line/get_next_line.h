/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:21:11 by minsuki2          #+#    #+#             */
/*   Updated: 2022/02/03 05:52:06 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# define	FD_MAX 1024
//------delete
# include <stdio.h>
# include <limits.h>
// # define	BUFFER_SIZE 10
//------
char	*get_next_line(int fd);
char	*ft_strlen_chr(const char *s, int c, size_t *len);
size_t	ft_strlcpy_only_size(char *dst, char const *src, size_t src_size);
char	*ft_strdup(const char *s1);

typedef struct		s_list
{
    char			*content;
    struct s_list   *next;
} t_list;
t_list	*ft_lstadd_back_last(t_list **lst, t_list *new);
t_list	*ft_lstnew_str(char *content);
#endif
