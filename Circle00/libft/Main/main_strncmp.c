#include "libft.h"
#include <stdio.h>
#include <string.h>

void	mem_print(char *s1, char *s2, size_t n);
void	strn_print(char *s1, char *s2, size_t n);

int main(void)
{
	char str1[] = "hfll3";
	char str2[] = "helx4";
	char str3[] = "good";
	char str4[] = "whatthe";
	char str5[] = "strcmp0244";
	char str6[] = "strcmp0323";

	str5[6] = 0;
	str6[6] = 0;

	printf("-----------strncmp-----------\n");
	strn_print(str1, str2, 4);

	strn_print(str3, str4, 8);

	strn_print(str5, str6, 9);

	printf("strcmp\\0abc / strcmp\\0123\n");
	strn_print(str5, str6, 0);

	// strn_print(NULL, NULL, 1); 	//=> seg. fault.

	// strn_print(str3, NULL, 1); 	//=> seg. fault.

	// strn_print(NULL, str3, 1); 	//=> seg. fault.

	strn_print(str1, str3, 0); 	//=> 0

	strn_print(str3, "goof", 3); 	//=> 0
	printf("-----------memcmp-----------\n");
	mem_print(str1, str2, 3);

	mem_print(str3, str4, 2);

	printf("strcmp\\0abc / strcmp\\0123");
	mem_print(str5, str6, 9);

	mem_print(str3, "goof", 3); 	//=> 0
	return (0);
}

void	strn_print(char *s1, char *s2, size_t n)
{
	printf("\n");
	printf("[CASE %s <-> %s]\n", s1, s2);
	printf("re : %d\n", strncmp(s1, s2, n));
	printf("my : %d\n", ft_strncmp(s1, s2, n));
	printf("\n");
	printf("---------\n");
}

void	mem_print(char *s1, char *s2, size_t n)
{
	printf("\n");
	printf("[CASE %s <-> %s]\n", s1, s2);
	printf("re : %d\n", memcmp(s1, s2, n));
	printf("my : %d\n", ft_memcmp(s1, s2, n));
	printf("\n");
	printf("---------\n");
}
