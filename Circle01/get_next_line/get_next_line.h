/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:21:11 by minsuki2          #+#    #+#             */
/*   Updated: 2022/02/04 21:10:49 by minsuki2         ###   ########.fr       */
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
char	*ft_strlen_chr_init(const char *s, int c, size_t *len, int init);
size_t	ft_strlcat_dstlen(char *dst, size_t dst_len, char const *src, size_t dstsize);
char	*ft_strdup(const char *s1);

typedef struct		s_list
{
    char			*content;
    struct s_list   *next;
} t_list;
t_list	*ft_lstadd_back_last(t_list **lst, t_list *new);
t_list	*ft_lstnew_str(char *content);
#endif
