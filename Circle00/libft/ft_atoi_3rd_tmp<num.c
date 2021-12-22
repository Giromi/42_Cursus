/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_back_up.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:27:51 by minsuki2          #+#    #+#             */
/*   Updated: 2021/12/20 18:14:48 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_isspace(int c);
static int	plma_check(int c, int *sign);

int	ft_atoi(const char *str)
{
	size_t	i;
	long	num;
	long	tmp;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(str[i]))
			i++;
	i += plma_check(str[i], &sign);
	while (ft_isdigit(str[i]) && str[i])
	{
		tmp = num;
		num = num * 10 + str[i] - '0';
		if (num < tmp)
		{
			printf("over\n");
			if (sign == -1)
				return (LONG_MIN);
			else
				return (LONG_MAX);
		}
		i++;
	}
	return (sign * num);
}

static	int	ft_isspace(int c)
{
	return ((c >= 0x09 && c <= 0x0d) || c == 0x20);
}

static	int	plma_check(int c, int *sign_ptr)
{
	size_t	n;

	n = 0;
	if (c == '+' || c == '-')
	{
		if (c == '-')
			*sign_ptr *= -1;
		n++;
	}
	return (n);
}
