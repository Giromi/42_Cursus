#include "libft.h"

int main(int ac, char *av[])
{
	char	*str0 = "345";
	char	*str1 = "123";
	size_t	n = 10;
	char	*p0;

	p0 = ft_strjoin(str0, str1);
	printf("my : %s\n", p0);
	printf("my : %p\n", p0);
	for (int i = 0; i < n; i++)
		printf("[%c]", p0[i]);
	printf("\n");
	for (int i = 0; i < n; i++)
		printf("[%d]", p0[i]);
	printf("\n");
	free(p0);
	return (0);
}
