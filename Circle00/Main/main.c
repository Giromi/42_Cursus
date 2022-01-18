#include <string.h>
#include "libft.h"
#include <stdio.h>

void cmp_print(char *dst, char *src, size_t size);

int main(void)
{
	char dst1[12] = "1";
	char dst2[8];

	char src1[] = "Hello_World";
	char src2[] = "12345";
	char my_dst2[12];
	size_t si = 12;

	printf("------strlcpy-----\n");

	cmp_print(dst1, src1, sizeof(char) * 7); // "Hello_"

	// cmp_print(NULL, src1, sizeof(char) * 7); // seg. fault

	// cmp_print(dst1, NULL, sizeof(char) * 7); // seg. fault
	// cmp_print(NULL, NULL, sizeof(char) * 7);	// seg. fault
	cmp_print(dst1, src1, 0);	// seg. fault
	printf("\n");
	return (0);
}
void cmp_print(char *dst, char *src, size_t size)
{
	char	*re_dst = strdup(dst);
	char	*my_dst = strdup(dst);


	printf("[CASE]\n");
	printf("re : %zu ", strlcpy(re_dst, src, size));
	printf("=> %s\n", re_dst);
	printf("my : %zu ", ft_strlcpy(my_dst, src, size));
	printf("=> %s\n", my_dst);
	printf("----------------\n");
}

// void for_print(
// {
// printf("< before >\n");
// for (int i = 0; i < si; i++)
// printf("[%c]", *(re_dst2 + i));
// printf("\n");
// for (int i = 0; i < si; i++)
// printf("[%c]", *(my_dst2 + i));
// printf("\n");
// printf("real : %zu\n", strlcpy(re_dst2, src2, sizeof(char) * 0));
// printf(" my  : %zu\n", ft_strlcpy(my_dst2, src2, sizeof(char) * 0));
// printf("< after >\n");
// for (int i = 0; i < si; i++)
// printf("[%c]", *(re_dst2 + i));
// printf("\n");
// for (int i = 0; i < si; i++)
// printf("[%d]", *(re_dst2 + i));
// printf("\n");
// printf("\n");
// for (int i = 0; i < si; i++)
// printf("[%c]", *(my_dst2 + i));
// printf("\n");
// for (int i = 0; i < si; i++)
//     printf("[%d]", *(my_dst2 + i));
// }
