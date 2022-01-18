/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:01:48 by minsuki2          #+#    #+#             */
/*   Updated: 2022/01/18 12:07:07 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

void	f_print(char *dst, char *src, size_t n);

int	main(void)
{
	// char src1[] = "Hello_World";
	// int src2[] = {3, 5, 6, 31};
	void *dst = (void *)malloc(1);
	void *src = (void *)malloc(1);
	printf("------memcpy-----\n");

	// for_print("Hello", src1, sizeof(char) * 7, 8);	// => "Hello_W"

	printf("[CASE 1]\n");			// => ""
	f_print(dst, src, 1);
	printf("[CASE 2]\n");			// => ""
	f_print(dst, dst, 1);
	printf("[CASE 3]\n");			// => "dfsd"
	f_print("dfsd", "dfsd", 1);
	printf("[CASE 4]\n");			// => (null)
	printf("\n");
	printf("%s\n", memcpy(NULL, NULL, 1));
	printf("%s\n", ft_memcpy(NULL, NULL, 1));
	printf("\n");
	printf("---------\n");
	printf("[CASE 5]\n");			// => (null)
	printf("\n");
	printf("%s\n", memcpy(NULL, NULL, 0));
	printf("%s\n", ft_memcpy(NULL, NULL, 0));
	printf("\n");
	printf("---------\n");
	printf("[CASE 6]\n");			// => (null)
	f_print("Hello", "what", 4);
	printf("[CASE 7]\n");			// => (null)
	printf("\n");
	printf("%s\n", memcpy(NULL, NULL, 0));
	printf("%s\n", ft_memcpy(NULL, NULL, 0));
	printf("\n");
	printf("---------\n");
//	-------------------------------------------------
	printf("[CASE 8]\n");			// => segmetation fault
	printf("%s\n", memcpy(dst, NULL, 1));
	printf("[CASE 9]\n");			// => segmetation fault
	printf("%s\n", memcpy(NULL, src, 1));

	// f_print(NULL, src, 1);

	// for_print(NULL, " ", 1, 3);					//

	// for_print(NULL, NULL, 0, 3);					// => segmetation fault
	// for_print(NULL, NULL, 4, 3);					// => segmetation fault
}


void	f_print(char *dst, char *src, size_t n)
{
	char	*re_dst = ft_strdup(dst);
	char	*my_dst = ft_strdup(dst);
	printf("\n");
	printf("%s\n", memcpy(re_dst, src, n));
	printf("%s\n", ft_memcpy(my_dst, src, n));
	printf("\n");
	printf("---------\n");

	// printf("\n");
	// printf("\n");
	// printf("< before >\n");
	// // for (int i = 0; i < s; i++)
	// //     printf("[%d]", *(re_dst + i));
	// // printf("\n");
	// // for (int i = 0; i < s; i++)
	// //     printf("[%d]", *(my_dst + i));
	// // printf("\n");
	// printf("%s\n", f(dst, src, 1));
	// printf("< after >\n");
	// // for (int i = 0; i < s; i++)
	// //     printf("[%d]", *(re_dst + i));
	// // printf("\n");
	// // for (int i = 0; i < s; i++)
	// //     printf("[%d]", *(my_dst + i));
	// printf("\n");
	// printf("\n");
	// free(dst);
}
