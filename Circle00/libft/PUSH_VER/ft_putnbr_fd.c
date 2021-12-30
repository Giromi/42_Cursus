/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 23:07:39 by minsuki2          #+#    #+#             */
/*   Updated: 2021/12/30 01:53:57 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd >= 0)
	{
		if (n > -10 && n < 10)
		{
			if (n < 0)
			{
				ft_putchar_fd('-', fd);
				n *= -1;
			}
			ft_putchar_fd(n + '0', fd);
			return ;
		}
		ft_putnbr_fd(n / 10, fd);
		if (n > 0)
			ft_putchar_fd(n % 10 + '0', fd);
		else
			ft_putchar_fd(-(n % 10) + '0', fd);
	}
}
