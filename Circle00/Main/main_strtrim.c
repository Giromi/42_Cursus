#include "libft.h"

int main(int ac, char *av[])
{
	const char		what0[] = "123test321";
	const char		what1[] = "312test213";
	const char		what2[] = "32te12st13";
	const char		what3[] = "32te12st13!";
	const char		what4[] = "!32te12st13!";
	const char		what5[] = "!32te12st13";
	const char		what6[] = "";
	const char		src0[] = "123";
	char			*result;
	char			*result0;
	char			*result1;
	char			*result2;
	char			*result3;
	char			*result4;
	char			*result5;
	char			*result6;
	size_t			n = 18;


	printf("\n");
	result0 = ft_strtrim(what0, src0);
	printf("  | %s \t@ %p\n",  what0, what0);
	printf("- | %s \t@ %p\n",  src0, src0);
	printf("  ----------------------------\n");
	printf("= | %s \t@ %p\n", result0, result0);

	printf("\n");
	result1 = ft_strtrim(what1, src0);
	printf("  | %s \t@ %p\n",  what1, what1);
	printf("- | %s \t@ %p\n",  src0, src0);
	printf("  ----------------------------\n");
	printf("= | %s \t@ %p\n", result1, result1);

	printf("\n");
	result2 = ft_strtrim(what2, src0);
	printf("  | %s \t@ %p\n",  what2, what2);
	printf("- | %s \t@ %p\n",  src0, src0);
	printf("  ----------------------------\n");
	printf("= | %s \t@ %p\n", result2, result2);

	printf("\n");
	result3 = ft_strtrim(what3, src0);
	printf("  | %s \t@ %p\n",  what3, what3);
	printf("- | %s \t@ %p\n",  src0, src0);
	printf("  ----------------------------\n");
	printf("= | %s \t@ %p\n", result3, result3);

	printf("\n");
	result3 = ft_strtrim(what3, src0);
	printf("  | %s \t@ %p\n",  what3, what3);
	printf("- | %s \t@ %p\n",  src0, src0);
	printf("  ----------------------------\n");
	printf("= | %s \t@ %p\n", result3, result3);

	printf("\n");
	result4 = ft_strtrim(what4, src0);
	printf("  | %s \t@ %p\n",  what4, what4);
	printf("- | %s \t@ %p\n",  src0, src0);
	printf("  ----------------------------\n");
	printf("= | %s \t@ %p\n", result4, result4);

	printf("\n");
	result5 = ft_strtrim(what5, src0);
	printf("  | %s \t@ %p\n",  what5, what5);
	printf("- | %s \t@ %p\n",  src0, src0);
	printf("  ----------------------------\n");
	printf("= | %s \t@ %p\n", result5, result5);

	printf("\n");
	result6 = ft_strtrim(what6, src0);
	printf("  | %s \t@ %p\n",  what6, what6);
	printf("- | %s \t@ %p\n",  src0, src0);
	printf("  ----------------------------\n");
	printf("= | %s \t@ %p\n", result6, result6);
	free(result);
	free(result0);
	free(result1);
	free(result2);
	free(result3);
	free(result4);
	free(result5);
	free(result6);
	return (0);
}
//	result = ft_strtrim(av[1], av[2]);
//	printf("  | %s \t@ %p \n- | %s \t@ %p\n", av[1], av[1], av[2], av[2]);
//	printf("  ----------------------------\n");
//	printf("= | %s \t@ %p\n", result, result);
//	for(int i= 0; i < n; i++)
//		printf("[%c]\t", result[i]);
//	printf("\n");
//	for(int i= 0; i < n; i++)
//		printf("[%d]\t", result[i]);
//
//	for(int i= 0; i < n; i++)
//		printf("[%c]\t", result0[i]);
//	printf("\n");
//	for(int i= 0; i < n; i++)
//		printf("[%d]\t", result0[i]);
//	printf("\n");
//	printf("\n");
