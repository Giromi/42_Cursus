#include "libft.h"

int main(int ac, char *av[])
{
	char	*str1 = "Hello";
	char	*pt;

	for(int i = 0; i < 10; i++)
		printf("[%c]", str1[i]);
	printf("\n");
	printf("ori : %p\n", pt);
	printf("\n");
	pt = ft_substr(str1, 1, 3);
	for(int i = 0; i < 10; i++)
		printf("[%c]\t", pt[i]);
	printf("\n");
	for(int i = 0; i < 10; i++)
		printf("[%d]\t", pt[i]);
	printf("\n");
	printf("my  : %p\n", pt);
	printf("\n");
	free(pt);
	return (0);
}
