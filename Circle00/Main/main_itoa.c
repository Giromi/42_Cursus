#include "libft.h"

void	check(char *ca, int n, char *result);

int main(int ac, char *av[])
{


	check("1", 123, "123");
	check("1", -123, "-123");
	check("2", 0, "0");
	check("3", 0, "0");
	// check("ac, av", ft_atoi(av[1]), av[1]);
	return (0);
}
void	check(char *ca, int n, char *result)
{
	char	*p = ft_itoa(n);

	printf("\n[CASE %s]\n", ca);
	printf("input : %d\n", n);
	printf("predict : \"%s\"\n", result);
	printf("my_func : \"%s\" \t@ %p\n", p, p);
	printf("  ----------------------------\n");
	// for(int i= 0; i < n; i++)
	//     printf("[%c]\t", result[i]);
	// printf("\n");
	// for(int i= 0; i < n; i++)
	//     printf("[%d]\t", result[i]);
	free(p);
}
