#include "libft/libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	what1[5] = "Hello";
	char	what2[6] = "OhYeah";
	int 	word1[]= {2, 3, 4 , 255, 1, 6};
	int 	word2[]= {2, 3, 4 , 255, 1, 6};
	int		*re_result;
	int		*my_result;

	
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

	printf("----------(int test)----------\n");
	printf("re is:");
	for(int i= 0; i< 6; i++)
				printf("[%d]", word1[i]);
	printf("\n");
	printf("my is: ");
	for(int i= 0; i< 6; i++)
				printf("[%d]", word2[i]);
	printf("\n");
	printf("re num : %p\n", word1);
	printf("my num : %p\n", word2);
	re_result = memchr(word1, 255, -1);
	my_result = ft_memchr(word2, 255, -1);
	printf("re num : %p\n", re_result);
	printf("my num : %p\n", my_result);
	printf("--------------------\n");
	printf("re is:");
	for(int i= 0; i< 10; i++)
				printf("[%d]", re_result[i]);
	printf("\n");
	printf("my is: ");
	for(int i= 0; i< 10; i++)
				printf("[%d]", my_result[i]);
	printf("\n");

	return (0);
}
