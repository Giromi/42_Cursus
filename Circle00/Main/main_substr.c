#include "libft.h"

void	for_print(char *ca, char *s, unsigned int start, size_t len);

int main(int ac, char *av[])
{
	char	*str1 = "Hello";

	// for_print("1-1", "Hello", 0, 0, "");
	// for_print("1-2", "Hello", 1, 0, "");
	// for_print("1-3", "Hello", 2, 0, "");
	// for_print("1-4", "Hello", 3, 0, "");
	// for_print("1-5", "Hello", 4, 0, "");
	// for_print("1-6", "Hello", 5, 0, "(null)");
	// for_print("1-7", "Hello", 6, 0, "(null)");
    //
	// for_print("2-1", "Hello", 3, 1, "l");
	// for_print("2-2", "Hello", 3, 2, "lo");
	// for_print("2-3", "Hello", 3, 6, "(null)");

	// for_print(, "Hello", 4, 1);	// $."Hello"
	// for_print(12, "Hello", 5, 1);	// $."Hello"

    //
	// for_print("3-1", "Hello", 0, 1);	// $.He
	// for_print("3-2", "Hello", 0, 2);	// $.He
	// for_print("3-3", "Hello", 0, 3);	// $.Hel
	// for_print("3-4", "Hello", 0, 4);	// $.Hell
	// for_print("3-5", "Hello", 0, 5);	// $.Hello
	// for_print("3-6", "Hello", 0, 6);	// $.Hello
	// for_print("3-7", "Hello", 0, 7);	// $.Hello

	// War-macine
	// for_print("W-3", "lorem ipsum dolor sit amet", 1, 100);		// $. ""
	// for_print("W-3", "lorem ipsum dolor sit amet", 400, 20);	// $. (null)

	//libftTester
	for_print("T-1", "tripouille", 0, 42000);


	// for_print(13, NULL, 1, 0);
	// for_print(14, NULL, 1, 5);
	system("leaks a.out | grep -w leaked");
	return (0);
}

void	for_print(char *ca, char *s, unsigned int start, size_t len)
{
	char	*pt;
	// for(int i = 0; i < 10; i++)
	//     printf("[%c]", str1[i]);
	// printf("\n");
	// printf("ori : %p\n", pt);
	// printf("\n");
	printf("[CASE %s]\n", ca);
	printf("%s @ %p [%u] (%zu)\n", s, s, start, len);
	pt = ft_substr(s, start, len);
	printf("my : %s @ %p\n", pt, pt);
	// for(int i = 0; i < 10; i++)
	//     printf("[%c]\t", pt[i]);
	// printf("\n");
	// for(int i = 0; i < 10; i++)
	//     printf("[%d]\t", pt[i]);
	// printf("\n");
	printf("\n");
	free(pt);
}
