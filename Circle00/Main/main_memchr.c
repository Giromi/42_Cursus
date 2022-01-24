#include "libft.h"
#include <stdio.h>
#include <string.h>

void check(char *ca, const void *s, int c, size_t n);
void for_print(char *what, size_t n);

int main(void)
{
	char	what1[5] = "Hello";
	char	what2[6] = "OhYeah";
	int 	word1[]= {2, 3, 4 , 255, 1, 6};
	int 	word2[]= {2, 3, 4 , 255, 257, 6};
	int		*re_result;
	int		*my_result;

	
	printf("----------memchr----------\n");
	check("1-1", what1, 'H', 6);
	check("1-2", what1, 'l', 4);
	check("1-3", what2, 'h', 6);
	check("1-4", what2, '\0', 10);
	check("1-4", what1, '\0', 10);

	printf("----------(int test)----------\n");
	check("I-1", word1, 255, -1);
	check("I-1", word2, 257, sizeof(int) * 10);

	return (0);
}

void check(char *ca, const void *s, int c, size_t n)
{
	char	*re = memchr(s, c, n);
	char	*my = ft_memchr(s, c, n);
	char	cc = c;
	printf("ori  : %s @ %p\n", s, s);
	printf("find : %u, %d\n", cc, c);
	for_print(re, n);
	printf("@ %p (%ld)\n", re, re - s);
	for_print(my, n);
	printf("@ %p (%ld)\n", my, my - s);
	printf("\n");
}

void for_print(void *what, size_t n)
{
	for (int i = 0; i < n; i++)
		printf("[%d]", what[i]);
}
