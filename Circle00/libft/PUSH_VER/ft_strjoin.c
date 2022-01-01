/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_finish.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 20:25:39 by minsuki2          #+#    #+#             */
/*   Updated: 2022/01/02 00:08:25 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pt;
	size_t	size;

	if (!(s1 && s2))
		return (NULL);
	pt = ft_strdup(s1);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	ft_strlcat(pt, s2, size);
	return (pt);
}
