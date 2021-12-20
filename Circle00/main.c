/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 10:00:42 by minsuki2          #+#    #+#             */
/*   Updated: 2021/12/20 17:19:29 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <string.h>

int main(int ac, char *av[])
{
	printf("re : %d\n", atoi(av[1]));
	printf("my : %d\n", ft_atoi(av[1]));
	return (0);
}
