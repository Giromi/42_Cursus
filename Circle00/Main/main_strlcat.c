#include <string.h>
#include "libft.h"
#include <stdio.h>

void cmp_print(char *dst, char *src, size_t size);

int main(void)
{
	char *dst1;
	char *src1;
	char dst2[8];
	char dst3[2];

	char my_dst2[12];
	size_t si = 12;

	printf("------strlcpy-----\n");
	src1 = (void *)malloc(1);
	dst1 = (void *)malloc(1);


	printf("1. ");
	// cmp_print(NULL, src1, sizeof(char) * 7); // seg. fault
	// cmp_print(dst1, NULL, sizeof(char) * 7); // seg. fault
	// cmp_print(NULL, NULL, sizeof(char) * 7);	// seg. fault

	printf("2. ");
	cmp_print("", "", 0);					// "1" 		(5)
	// printf("re : %zu ", strlcat(NULL, src1, 0));
	// printf("re : %zu ", strlcat(dst1, NULL, 0));
	// printf("re : %zu ", strlcat(NULL, NULL, 0));

	printf("3. ");
	cmp_print("", "t", sizeof(char) * 3);	// "t"
	cmp_print("1", "t", sizeof(char) * 3);	// "t"
	cmp_print("12", "t", sizeof(char) * 3);	// "t"
	cmp_print("123", "t", sizeof(char) * 3);	// "t"
	cmp_print("1234", "t", sizeof(char) * 3);	// "t"
	cmp_print("12345", "t", sizeof(char) * 3);	// "t"
	cmp_print("123456", "t", sizeof(char) * 3);	// "t"

	printf("4. ");
	cmp_print("1", "Hello", 0);					// "1" 		(5)
	cmp_print("1", "Hello", sizeof(char) * 1);	// "1" 		(6)
	cmp_print("1", "Hello", sizeof(char) * 2);	// "1" 		(6)
	cmp_print("1", "Hello", sizeof(char) * 3);	// "1H"		(6)
	cmp_print("1", "Hello", sizeof(char) * 4);	// "1He"	(6)
	cmp_print("1", "Hello", sizeof(char) * 5);	// "1Hel"	(6)
	cmp_print("1", "Hello", sizeof(char) * 6);	// "1Hell"	(6)
	cmp_print("1", "Hello", sizeof(char) * 7);	// "1Hello" (6)
	cmp_print("1", "Hello", sizeof(char) * 8);	// "1Hello" (6)

	printf("5. ");
	cmp_print("", "", sizeof(char) * 3);		// ""
	cmp_print("", "t", sizeof(char) * 3);		// "t"
	cmp_print("", "te", sizeof(char) * 3);		// "t"
	cmp_print("", "tes", sizeof(char) * 3);		// "t"
	cmp_print("", "test", sizeof(char) * 3);	// "t"
	cmp_print("", "test1", sizeof(char) * 3);	// "t"
	cmp_print("", "test12", sizeof(char) * 3);	// "t"

	printf("6. ");

	printf("6. ");

	printf("7. ");
	cmp_print("", "test", sizeof(char) * 3);	// "t"
	printf("\n");
	return (0);
}
void cmp_print(char *dst, char *src, size_t size)
{
	char	*re_dst = strdup(dst);
	char	*my_dst = strdup(dst);


	printf("[CASE]\n");
	printf("\"%s\" + \"%s\" < %zu >\n", dst, src, size);
	printf("re : %zu ", strlcat(re_dst, src, size));
	printf("-> %s\n", re_dst);
	printf("my : %zu ", ft_strlcat(my_dst, src, size));
	printf("-> %s\n", my_dst);
	for (int i = 0; i < 20; i++)
	printf("[%c]", *(re_dst + i));
	printf("\n");
	for (int i = 0; i < 20; i++)
	printf("[%c]", *(my_dst + i));
	printf("\n");
	printf("---------------------\n");
}
