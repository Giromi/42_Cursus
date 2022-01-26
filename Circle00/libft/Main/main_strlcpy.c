#include <string.h>
#include "libft.h"
#include <stdio.h>

void cmp_print(char *dst, char *src, size_t size);

int main(void)
{
	char dst1[12] = "1";
	char dst2[8];
	char dst3[2];

	char my_dst2[12];
	size_t si = 12;

	printf("------strlcpy-----\n");

	cmp_print(dst1, "Hello_World", sizeof(char) * 7); // "Hello_"

	printf("1. ");
	cmp_print(dst1, "Hello", 0);	// "1"

	printf("2. ");
	cmp_print("he", "test", sizeof(char) * 2);	// "1"

	printf("3. ");
	cmp_print("he", "t", sizeof(char) * 3);	// "t"

	printf("4. ");
	cmp_print("he453", "t", sizeof(char) * 3);	// "t"

	printf("5. ");
	cmp_print("", "t", sizeof(char) * 3);	// "t"

	printf("5. ");
	cmp_print("", "te", sizeof(char) * 3);	// "t"

	printf("6. ");
	cmp_print("", "tes", sizeof(char) * 3);	// "t"

	printf("7. ");
	cmp_print("", "test", sizeof(char) * 3);	// "t"
	// cmp_print(NULL, src1, sizeof(char) * 7); // seg. fault

	// cmp_print(dst1, NULL, sizeof(char) * 7); // seg. fault
	// cmp_print(NULL, NULL, sizeof(char) * 7);	// seg. fault
	printf("\n");
	return (0);
}
void cmp_print(char *dst, char *src, size_t size)
{
	char	*re_dst = strdup(dst);
	char	*my_dst = strdup(dst);


	printf("[CASE]\n");
	printf("dst <- \"%s\"\n", src);
	printf("re : %zu ", strlcpy(re_dst, src, size));
	printf("-> %s\n", re_dst);
	printf("my : %zu ", ft_strlcpy(my_dst, src, size));
	printf("-> %s\n", my_dst);
	printf("----------------\n");
	for (int i = 0; i < 20; i++)
	printf("[%c]", *(re_dst + i));
	printf("\n");
	for (int i = 0; i < 20; i++)
	printf("[%c]", *(my_dst + i));
	printf("\n");
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
// }
