#include "libft.h"

void	check(char *number, char *s1, char *s2, char *result);

int main(int ac, char *av[])
{
	size_t	n = 10;
	char *str0 = "where is my ";
	char *str1 = "malloc ???";
	void *ptr0;
	void *ptr1;

	ptr0 = (void *)0;
	ptr1 = (void *)0;

	check("1", "123", "345", "123345");
	check("2", "", "", "123345");
	check("3-1", NULL, NULL, "(null)");
	check("3-2", NULL, "", "(null)");
	check("3-3", "", NULL, "(null)");
	check("4", str1, str0, "(null)");
	check("5", ptr1, "", "");
	return (0);
}

void	check(char *number, char *s1, char *s2, char *result)
{
	char	*p;

	printf("\n[CASE %s]\n", number);
	printf("\"%s\" + \"%s\"\n", s1, s2);
	p = ft_strjoin(s1, s2);
	printf("re : \"%s\"\n", result);
	printf("my : \"%s\" \t@ %p\n", p, p);
	if (p == ((void *)0))
		printf("good");
	else
		printf("no");
	free(p);

}
