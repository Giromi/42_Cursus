#include "libft.h"

int main(int ac, char *av[])
{
	const char		what0[] = "teststart123123test123123";
	const char		what1[] = "test12start12";
	const char		src0[] = "123";
	char			*result;
	char			*result0;
	size_t			n = 18;


	printf("\n");
	result0 = ft_strtrim(what0, src0);
	printf("  | %s \t@ %p \n- | %s \t\t\t@ %p\n", what0, what0, src0, src0);
	printf("  ----------------------------\n");
	printf("= | %s \t\t@ %p\n", result0, result0);
	for(int i= 0; i < n; i++)
		printf("[%c]\t", result0[i]);
	printf("\n");
	for(int i= 0; i < n; i++)
		printf("[%d]\t", result0[i]);
	printf("\n");
	printf("\n");

	result = ft_strtrim(av[1], av[2]);
	printf("  | %s \t@ %p \n- | %s \t@ %p\n", av[1], av[1], av[2], av[2]);
	printf("  ----------------------------\n");
	printf("= | %s \t@ %p\n", result, result);
	for(int i= 0; i < n; i++)
		printf("[%c]\t", result[i]);
	printf("\n");
	for(int i= 0; i < n; i++)
		printf("[%d]\t", result[i]);
	free(result);
	free(result0);
	return (0);
}
