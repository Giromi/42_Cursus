/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:21:11 by minsuki2          #+#    #+#             */
/*   Updated: 2022/02/02 21:32:53 by minsuki2         ###   ########.fr       */
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
char	*ft_strchr_len(const char *s, int c);
size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize);
char	*ft_strdup(const char *s1);
char 	*get_next_line_bonus(int fd);

typedef struct		s_list
{
    char			*content;
    struct s_list   *next;
} t_list;
void	ft_lstadd_newstr_back(t_list **lst, char *content);
t_list	*ft_lstlast(t_list *lst);
#endif
