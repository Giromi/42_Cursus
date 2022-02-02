#include "libft.h"

int sum(int, int);

int main(int ac, char *av[])
{
	char		what0[] = "123test321";
	char		what1[] = "";
	char			*result;
	char			*result0;
	char			*result1;
	int a = 10;
	int b = 20;
	int (*f)(int, int);
	f = sum;

	printf("*f   : %p\n", *f);
	printf(" f   : %p\n", f);
	printf("&f   : %p\n", &f);
	printf("*sum : %p\n", *sum);
	printf(" sum : %p\n", sum);
	printf("&sum : %p\n", &sum);
	r

int sum(int a, int b)
{
	return a + b;
}
	/*
	printf("\n");
	printf("  | %s \t@ %p\n", what0, what0);
	printf("  ----------------------------\n");
	ft_striteri(what0, &f);
	printf("  | %s \t@ %p\n", what0, what0);

	printf("\n");
	printf("  | %s \t@ %p\n", what1, what1);
	printf("  ----------------------------\n");
	ft_striteri(what1, &f);
	printf("  | %s \t@ %p\n", what1, what1);
	*/
	return (0);
}

