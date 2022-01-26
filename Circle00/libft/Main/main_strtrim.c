#include "libft.h"

void check(char *ca, char const *what, char const *src);

int main(int ac, char *av[])
{
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *s2 = "";


	// check("U-1", s1, " \n\t");
	// check("U-1", "", " \n\t");

	// libftTester
	check("T-1", "123", "");

	// check("1-1", "123test321", "123");
	// check("1-2", "!3test321", "123");
	// check("1-3", "!3test321!", "");


	return (0);
}

void check(char *ca, char const *what, char const *src)
{
	char	*result;
	printf("\n[CASE %s]\n", ca);
	result = ft_strtrim(what, src);
	printf("  | \"%s\" \t@ %p\n",  what, what);
	printf("- | \"%s\" \t@ %p\n",  src, src);
	printf("  ----------------------------\n");
	printf("= | \"%s\" \t@ %p\n", result, result);
	free(result);
}
