/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:27:51 by minsuki2          #+#    #+#             */
/*   Updated: 2021/12/23 05:15:54 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		plma_check(int c, int *sign);
static	int		ft_isspace(int c);
static	size_t	make_max(int *ptr);

int	ft_atoi(const char *str)
{
	int		sign;
	int		c;
	long	num;
	size_t	i;
	size_t	over_value;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	i += plma_check(str[i], &sign);
	over_value = make_max(&sign);
	while (ft_isdigit(str[i]) && str[i])
	{
		c = str[i] - '0';
		printf("num : %ld          \t?          front : %ld\n", num, (long)(over_value / 10));
		printf("c   : %d          \t?          left   : %d\n", c, (int)(over_value % 10));
		if (num > (long)(over_value / 10) || (num == (long)(over_value / 10)
					&& c > (int)(over_value % 10)))
		{
			printf("Over flow\n");
			return (sign * (int)over_value);
		}
		num = num * 10 + c;
		i++;
	}
	return (sign * num);
}

static	size_t	make_max(int *ptr)
{
	size_t	tmp_max;

	if (*ptr == -1)
		tmp_max = LONG_MIN;
	else
		tmp_max = LONG_MAX;
	return (tmp_max);
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
