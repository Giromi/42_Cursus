#include <string.h>
#include "libft.h"
#include <stdio.h>

void	check(char *ca, char const *s, int c);

int main(void)
{
	check("1", "Hello", 'H');
	check("T-1", "Hello", 0);

	check("2-1", "Helloa", 97);
	check("2-2", "Helloa", 353);

    return 0;
}

void	check(char *ca, char const *s, int c)
{
	char *re;
	char *my;
	re = strchr(s, c);
    my = ft_strchr(s, c);
	printf("\n[CASE %s]\n", ca);
    printf(" %s @ %p [%ld]\n", re, re, re - s);
    printf(" %s @ %p [%ld]\n", my, my, my - s);
	printf("\n------------------\n");
}
