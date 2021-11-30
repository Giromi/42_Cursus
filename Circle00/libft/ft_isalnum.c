/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:14:41 by minsuki2          #+#    #+#             */
/*   Updated: 2021/11/30 18:17:02 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isalpha(int c);
int ft_isdigit(int c);

int	ft_isalnum(int c)
{
	return(ft_isalpha(c) || ft_isdigit(c));
}

