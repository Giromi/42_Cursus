#include "libft/libft.h"
#include <stdio.h>
#include <string.h>

size_t	strlcat_origin(char *dst, const char *src, size_t siz);

int main(void)
{
	const char	src1[] = "3456";
	const char	src2[] = "3456";
	char		what1[] = "12";
	char		what2[] = "12";
	size_t		re_result;
	size_t		my_result;
		
	printf("\n");
	re_result = strlcat(what1, src1, 5);
	my_result = ft_strlcat(what2, src2, 5);
	printf("--------------------\n");
	printf("re num : %zu\n", re_result);
	printf("my num : %zu\n", my_result);
	printf("--------------------\n");
	printf("re is:");
	for(int i= 0; i < 20; i++)
		printf("[%c]", what1[i]);
	printf("\n");
	printf("my is: ");
	for(int i= 0; i< 20; i++)
		printf("[%c]", what2[i]);
	printf("\n");
	printf("re : %s\n", what1);
	printf("my : %s\n", what2);
	printf("\n");

	return (0);
}

size_t	strlcat_origin(char *dst, const char *src, size_t siz)
{
	register char *d = dst;
	register const char *s = src;
	register size_t n = siz;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen; //size_t 범위 넘어버림

	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));	/* count does not include NUL */
}
