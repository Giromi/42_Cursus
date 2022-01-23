
#include "libft.h"
#include <ctype.h>

int main(void)
{
	int 	n;
	int 	n2;

	n = 353;
	n2 = 4294967393;
	printf("my_result : %d\n", ft_isalpha('a'));	// 1
	printf("re_result : %d\n", isalpha('a'));		// 1
	printf("my_result : %d\n", ft_isalpha('A'));
	printf("re_result : %d\n", isalpha('A'));
	printf("my_result : %d\n", ft_isalpha('1'));
	printf("re_result : %d\n", isalpha('1'));
	printf("re_result : %d\n", isalpha('1'));
	printf("re_result : %c => %d\n", (int)n, isalpha(n));
	printf("re_result : %c => %d\n", (char)n, ft_isalpha(n));
	printf("re_result : %c => %d\n", (int)n2, isalpha(n2));
	printf("re_result : %c => %d\n", (char)n2, ft_isalpha(n2));
	return (0);
}

