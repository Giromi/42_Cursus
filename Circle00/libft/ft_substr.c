/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 18:22:33 by minsuki2          #+#    #+#             */
/*   Updated: 2022/01/04 15:01:00 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	size;

	size = len + 1;
	ptr = malloc(sizeof(char) * size);
	if (!(ptr))
		return (NULL);
	ft_strlcpy(ptr, s + start,  size);
	return (ptr);
}
