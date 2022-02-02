/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:22:45 by minsuki2          #+#    #+#             */
/*   Updated: 2022/02/01 02:58:00 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# define	FD_MAX 256
//------delete
# include <stdio.h>
# include <limits.h>
// # define	BUFFER_SIZE 10
//------
char	*ft_strchr_len(const char *s, int c);
size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize);
char	*ft_substr(char const *s, unsigned int start, size_t len);

typedef struct		s_list
{
    char			*content;
    struct s_list   *next;
} t_list;
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew_str(char *content);
#endif
