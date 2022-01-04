/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:00:20 by minsuki2          #+#    #+#             */
/*   Updated: 2021/12/30 21:27:53 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
		while (n-- && (s1[i] || s2[i]))
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
	return (0);
}

