#include "libft.h"
#include <string.h>

int main(int ac, char *av[])
{
	char	str1[] = "Hello World";
	char	str2[] = "World";
	char	str3[] = "Hello World";
	char	str4[] = "World";
	char	*re_ptr;
	char	*my_ptr;
	int		len1 = 10;
	int		len2 = 10;

	re_ptr = strnstr(str1, str2, len1);
	printf("or : %p\n", str1);
	printf("re : %p\n", re_ptr);
	printf("or - re = %ld\n", re_ptr - str1);

	my_ptr = ft_strnstr(str3, str4, len2);
	printf("or : %p\n", str3);
	printf("my : %p\n", my_ptr);
	printf("or - my = %ld\n", my_ptr - str3);


	/* av 사용
	 * printf("or : %p\n", av[1]);
	 * printf("av : %p\n", ft_strnstr(av[1], av[2], ft_atoi(av[3])));
	 */


	return (0);
}
