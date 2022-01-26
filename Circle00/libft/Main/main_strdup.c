#include "libft.h"
#include <string.h>

int main(int ac, char *av[])
{
	char	*str1;
	char	*str2;


	str1 = strdup(av[1]);
	str2 = ft_strdup(av[1]);

	printf("av : %s // %p\n", av[1], av[1]);
	printf("re : %s // %p\n", str1, str1);
	printf("my : %s // %p\n", str2, str2);

	for(int i= 0; i < 5; i++)
		printf("[%d]", str2[i]);
	printf("\n");
	free(str1);
	free(str2);
	return (0);

}
