#include "libft.h"

void f(unsigned int, char *);

int main(int ac, char *av[])
{
	char		what0[] = "123test321";
	char		what1[] = "";
	char			*result;
	char			*result0;
	char			*result1;


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
	return (0);
}

void f(unsigned int i, char *s)
{
	*s = ft_toupper(*s);
}
