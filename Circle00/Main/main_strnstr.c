/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 10:00:42 by minsuki2          #+#    #+#             */
/*   Updated: 2021/12/28 00:34:23 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int main(int ac, char *av[])
{
	char	str1[] = "Hello World" ;
	char	str2[] = "World";
	char	str3[] = "Hello World" ;
	char	str4[] = "World";
	char	*re_ptr;
	char	*my_ptr;
	int		len1 = 3;
	int		len2 = 3;

	re_ptr = strnstr(str1, str2, len1);
	printf("or : %p\n", str1);
	printf("re : %p\n", re_ptr);
	printf("or - re = %ld\n", str1 - re_ptr);

	my_ptr = ft_strnstr(str3, str4, len2);
	printf("or : %p\n", str2);
	printf("my : %p\n", my_ptr);
	printf("or - my = %ld\n", str1 - my_ptr);


	/* av 사용
	 * printf("or : %p\n", av[1]);
	 * printf("av : %p\n", ft_strnstr(av[1], av[2], ft_atoi(av[3])));
	 */


	return (0);
}
