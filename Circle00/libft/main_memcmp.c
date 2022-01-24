#include "libft/libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "hfll3";
	char str2[] = "helx4";
	char str3[] = "good";
	char str4[] = "whatthe";
	char str5[] = "strcmp0244";
	char str6[] = "strcmp0223";

	str5 [6] = 0;
	str6 [6] = 0;


	printf("strcmp\\0abc / strcmp\\0123\n");
	printf("re : %d\n", strncmp(str5, str6, 9));
	printf("my : %d\n", ft_strncmp(str5, str6, 9));

	printf("-----------memcmp-----------\n");
	printf("%s <=> %s\n", str1, str2);
	printf("re : %d\n", memcmp(str1, str2, 3));
	printf("my : %d\n", ft_memcmp(str1, str2, 3));

	printf("%s <=> %s\n", str3, str4);
	printf("re : %d\n", memcmp(str3, str4, 2));
	printf("my : %d\n", ft_memcmp(str3, str4, 2));

	printf("strcmp\\0abc / strcmp\\0123\n");
	printf("re : %d\n", memcmp(str5, str6, 9));
	printf("my : %d\n", ft_memcmp(str5, str6, 9));

	return (0);
}

//			printf("s1[%zu] == s2[%zu]\n", i, i);
//			printf("   %c == %c <= i : %zu\n", ((char *)s1)[i], ((char *)s2)[i], i);
//			printf("s1[i] == s2[i]\n");
//			printf("   %c == %c <= i : %zu\n", s1[i], s2[i], i);
//	  	printf("   %c == %c <= i : %zu\n", s1[i], s2[i], i);
