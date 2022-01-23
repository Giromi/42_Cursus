#include "libft.h"
#include <ctype.h>

void	dec_bin(int n, size_t i);
void	bin_printf(int n, size_t i);

int	main(void)
{
	int n = ~0B01111111; //	-128
	bin_printf(n, 32);
	printf("[CASE 1] : %d\n", (char)~0B111101111111);	// : -128
	printf("[CASE 2] : %d\n", 0B111101111111);	// : -128
	printf("[CASE 3] : %d\n", (int)0B111101111111);	// : 3967
	printf("[CASE 4] : %d\n", (int)~0B111101111111);	// : -3968
	printf("[CASE 5] : %d\n", (int)~3967);	// : -3968

	printf("re_result : %d\n", isascii(300));		// 1
	printf("my_result : %d\n", ft_isascii(300));
	printf("re_result : %d\n", isascii(500));
	printf("my_result : %d\n", ft_isascii(500));
	
	printf("re_result : %d\n", isascii(-128));
	printf("my_result : %d\n", ft_isascii(-128));
	printf("re_result : %d\n", isascii(127));
	printf("my_result : %d\n", ft_isascii(127));
	return (0);
	
}

void	bin_printf(int n, size_t i)
{
	printf("0B");
	dec_bin(n, i);
	printf("\n");
}

void	dec_bin(int n, size_t i)
{
	if (i)
		dec_bin(n/2, i - 1);
	printf("%d", n%2);
}
