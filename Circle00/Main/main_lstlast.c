#include "libft.h"

int main(int ac, char *av[])
{
	char	str0[] = "I'm 0";
	char	str1[] = "I'm 1";
	char	str2[] = "I'm 2";
	t_list	*test0;
	t_list	*test1;
	t_list	*test2;
	t_list	*test;

	test0 = ft_lstnew(str0);
	test1 = ft_lstnew(str1);
	test2 = ft_lstnew(str2);
	printf("< Before >\n");
	printf("result : %p\n", test0->next);
	printf("result : %p\n", test1->next);
	printf("result : %p\n", test2->next);
	test0->next = test1;
	test1->next = test2;
	printf("< After >\n");
	printf("result : %p\n", test0->next);
	printf("result : %p\n", test1->next);
	printf("result : %p\n", test2->next);


zsh:1: command not found: :wq
	test = ft_lstlast(test0);
	printf("result : %s\n", (char *)test->content);
	printf("result : %p\n", test->next);
	test = ft_lstlast(test1);
	printf("result : %s\n", (char *)test->content);
	printf("result : %p\n", test->next);

	free(test0);
	free(test1);
	free(test2);
	return (0);
}
