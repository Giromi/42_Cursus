/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 10:00:42 by minsuki2          #+#    #+#             */
/*   Updated: 2022/01/20 23:24:33 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int ac, char *av[])
{
	char	*ar1;
	char	*ar2;
	char	*ar3;
	char	*ar4;
	char	*ar5 = calloc(8539, sizeof(int));
	char	*ar6 = ft_calloc(8539, sizeof(int));
	long	error;


	ar1 = malloc(sizeof(char) * 5);
	ar2 = calloc(5, sizeof(char));
	ar3 = ft_calloc(5, sizeof(char));
	ar4 = ft_calloc(5, sizeof(int));
	printf("re = %s @ %p\n", ar5, ar5);
	printf("my = %s @ %p\n", ar6, ar6);
	if ((error = ft_memcmp(ar5, ar6, 8539 * sizeof(int))))
		printf("error %ld\n", error);

	printf("myfunc = %p\n", ar3);
	for(int i= 0; i < 5; i++)
		printf("[%d]", ar1[i]);
	printf("\n");
	for(int i= 0; i< 5; i++)
		printf("[%d]", ar2[i]);
	printf("\n");
	for(int i= 0; i< 5; i++)
		printf("[%d]", ar3[i]);
	printf("\n");
	for(int i= 0; i< 25; i++)
		printf("[%d]", ar4[i]);

	free(ar1);
	free(ar2);
	free(ar3);
	free(ar4);
	free(ar5);
	free(ar6);

	return (0);

}

