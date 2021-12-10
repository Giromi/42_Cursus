/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_const_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:37:03 by minsuki2          #+#    #+#             */
/*   Updated: 2021/12/11 05:49:46 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
size_t	ft_strlen(const char *s);


int main(void)
{
	char src2[2] = "12";
	char *src3;


	/** src2[0] = '1'; */
	/** src2[1] = '2'; */
	src3 = &(src2[2]);
	*(src3) = '4';

	printf("------------strlen------------\n");
	printf("len  : %zu\n", strlen(src2));
	printf("len  : %zu\n", ft_strlen(src2));
	printf("what : %s\n", src2);
	for (int i = 0; i < 9; i++)
		printf("[%c]", *(src2 + i));
	printf("\n");
	for (int i = 0; i < 9; i++)
		printf("[%d]", *(src2 + i));
	printf("\n");
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
