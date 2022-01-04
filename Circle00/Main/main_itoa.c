#include "libft.h"

int main(int ac, char *av[])
{

	printf("%d \t/ %d = %d\n", 	-3, 	10,	 	-3 / 10);
	printf(" %d \t/ %d = %d\n", 	 3, 	10, 	-3 / 10);
	printf(" %d \t/ %d = %d\n",	 331, 	10,		 331 / 10);
	printf("%d \t/ %d = %d\n",	-271, 	10,		-271 / 10);
	int		what0 = 123;
	int		what1 = 123;
	char	*result;
	char	*result0;
	size_t	n = 20;


	printf("\n");
	result0 = ft_itoa(what0);

	printf(" %%d | %d \n", what0);
	printf("  ----------------------------\n");
	printf(" %%s | %s \t@ %p\n", result0, result0);
	for(int i= 0; i < n; i++)
		printf("[%c]\t", result0[i]);
	printf("\n");
	for(int i= 0; i < n; i++)
		printf("[%d]\t", result0[i]);
	printf("\n");
	printf("\n");

	result = ft_itoa(ft_atoi(av[1]));
	printf(" %%d | %d \n", ft_atoi(av[1]));
	printf("  ----------------------------\n");
	printf(" %%s | %s \t@ %p\n", result, result);
	for(int i= 0; i < n; i++)
		printf("[%c]\t", result[i]);
	printf("\n");
	for(int i= 0; i < n; i++)
		printf("[%d]\t", result[i]);
	free(result);
	free(result0);
	return (0);
}
