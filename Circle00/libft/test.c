/*
#include "libft.h"




char* ft_strmapi(char const* s, char (*f)(unsigned int, char))
{
	size_t len;
	size_t i;
	char* str;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

}


char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, &f);
	printf("%s\n", str2);
}

*/

#include <stdio.h>
int sum(int, int);

int main(void)
{
	int a = 10;
	int b = 20;
	int (*f)(int, int);
	int *p;
	f = sum;

	p = &a;
	printf("*f   : %p\n", *f);
	printf(" f   : %p\n", f);
	printf("&f   : %p\n", &f);
	printf("*sum : %p\n", *sum);
	printf(" sum : %p\n", sum);
	printf("&sum : %p\n", &sum);

	
	printf("&a   : %p\n", &a);
	printf(" a   : %p\n", a);
	printf(" p   : %p\n", p);
	printf("*p   : %p\n", *p);

	int c = 32;
	int *d = &c;
	printf("%p\n", d);
	printf("%p\n", &d);
}

int sum(int a, int b)
{
	return a + b;
}

