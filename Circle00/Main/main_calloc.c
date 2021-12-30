/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 10:00:42 by minsuki2          #+#    #+#             */
/*   Updated: 2021/12/29 17:13:17 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int ac, char *av[])
{
	char	*ar1;
	char	*ar2;
	char	*ar3;
	char	*ar4;

	ar1 = malloc(sizeof(char) * 5);
	ar2 = calloc(5, sizeof(char));
	ar3 = ft_calloc(5, sizeof(char));
	ar4 = ft_calloc(5, sizeof(int));
	printf("malloc = %p\n", ar1);
	printf("calloc = %p\n", ar2);

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
	printf("\n");

	free(ar1);
	free(ar2);
	free(ar3);
	free(ar4);

	return (0);

}

