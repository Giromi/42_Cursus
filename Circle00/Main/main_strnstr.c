#include "libft.h"
#include <string.h>

void	result_print(size_t n, char *str1, char *str2, size_t len);

int main(int ac, char *av[])
{
	char 	*s1 = "MZIRIBMZIRIBMZE123";
	char 	*s2 = "MZIRIBMZE";
	int		len1 = 10;
	int		len2 = 10;
	char *s3 = "see FF your FF return FF now FF";
	char *s4 = "FF";
	size_t max = strlen(s1);

	// result_print(1, NULL, NULL, 0); 	// $ seg. fault
	// result_print(2, NULL, NULL, 1);		// $ seg. fault
	// result_print(3, "", NULL, 0);		// $ seg. fault
	// result_print(4, "123", NULL, 0);	// $ seg. fault
	// result_print(5, "", NULL, 1);		// $ seg. fault
	// result_print(6, NULL, "", 0);			// $ null / 0
	// result_print(7, NULL, "", 1);			// $ null / 0
	// result_print(NULL, "123", 1);	// $ seg. fault
	// result_print(8, "", "", 0);			// $ &[0] / 0
	// result_print(9, "", "", 1);			// $ &[0] / 0

	result_print(11, "ab", "c", -1);			// $ &[0] / 0




	result_print(10, "Hello World", "World", 0);
	result_print(11, "Hello World", "World", 1);
	result_print(12, "Hello World", "World", 2);
	result_print(13, "Hello World", "World", 3);
	result_print(14, "Hello World", "World", 4);
	result_print(15, "Hello World", "World", 5);
	result_print(16, "Hello World", "World", 6);
	result_print(17, "Hello World", "World", 7);
	result_print(18, "Hello World", "World", 8);
	result_print(19, "Hello World", "World", 9);
	result_print(20, "Hello World", "World", 10);
	result_print(21, "Hello World", "World", 11);
	printf("---------------------------------\n");

	result_print(22, s1, s2, ft_strlen(s2));
	result_print(23, s1, s2, ft_strlen(s2) + 1);
	result_print(24, s1, s2, 11);
	result_print(25, s1, s2, 12);
	result_print(26, s1, s2, 13);


	result_print(27, s3, s4, ft_strlen(s3));



	return (0);
}

void	result_print(size_t n, char *str1, char *str2, size_t len)
{
	char	*re_ptr;
	char	*my_ptr;
	re_ptr = strnstr(str1, str2, len);
	my_ptr = ft_strnstr(str1, str2, len);
	printf("[CASE %zu]\n", n);
	printf("%s <<< %s (%zu)\n", str1, str2, len);
	printf("%s @ %p => %ld\n", re_ptr, re_ptr, re_ptr - str1);
	printf("%s @ %p => %ld\n", my_ptr, my_ptr, my_ptr - str1);
	printf("-----------------------\n");
}
