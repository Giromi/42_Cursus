/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_finish.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 18:22:33 by minsuki2          #+#    #+#             */
/*   Updated: 2022/01/17 22:04:55 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = ft_calloc(len, sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
