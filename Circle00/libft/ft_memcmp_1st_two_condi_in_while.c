/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 10:47:23 by minsuki2          #+#    #+#             */
/*   Updated: 2021/12/20 11:57:24 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ( n > 0 )
	{
		while (((char *)s1)[i] == ((char *)s2)[i] && i < n)
		{
			printf("s1[%zu] == s2[%zu]\n", i, i);
			printf("   %c == %c <= i : %zu\n", ((char *)s1)[i], ((char *)s2)[i], i);
				i++;
		}
		printf("s1[%zu] == s2[%zu]\n", i, i);
		printf("   %c == %c <= i : %zu\n", ((char *)s1)[i], ((char *)s2)[i], i);
		//return (((char *)s1)[i - 1] - ((char *)s2)[i - 1]);
		return (((char *)s1)[i] - ((char *)s2)[i]);
	}
	return (0);
}

