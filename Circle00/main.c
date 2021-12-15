#include "libft/libft.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	what1[5] = "Hello";
	char	what2[6] = "OhYeah";

	
	printf("----------memchr----------\n");
	printf("ori  : %p\n", what1);
	printf("find : 'H'\n");
	printf("real : %p\n", memchr(what1, 'H', 6));
	printf("my   : %p\n", ft_memchr(what1, 'H', 6));
	printf("\n");
	printf("ori  : %p\n", what1);
	printf("find : 'l'\n");
	printf("real : %p\n", memchr(what1, 'l', 4));
	printf("my   : %p\n", ft_memchr(what1, 'l', 4));
	printf("\n");
	printf("ori  : %s\n", what2);
	printf("ori  : %p\n", what2);
	printf("find : 'h'\n");
	printf("real : %p\n", memchr(what2, 'h', 6));
	printf("my   : %p\n", ft_memchr(what2, 'h', 6));
	printf("\n");
	printf("ori  : %s\n", what2);
	printf("ori  : %p\n", what2);
	printf("find : '\\0'\n");
	printf("real : %p\n", memchr(what1, '\0', 10));
	printf("my   : %p\n", ft_memchr(what1, '\0', 10));
	printf("\n");
	printf("\n");
	return (0);
}
