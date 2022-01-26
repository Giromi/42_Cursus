#include "libft.h"

int main(int ac, char *av[])
{
	char	str1[] = "I'm 1";
	char	str2[] = "I'm 2";
	char	str3[] = "I'm 3";
	char	str4[] = "I'm 4";

	t_list	*test0;
	t_list	*test1;
	t_list	*test2;
	t_list	*test3;
	t_list	*test4;
	t_list	**test;

	test = (t_list **)malloc(sizeof(t_list *));
	test0 = ft_lstnew(str1);
	test1 = ft_lstnew(str1);
	test2 = ft_lstnew(str2);
	test3 = ft_lstnew(str3);
	test4 = ft_lstnew(str4);
	printf("< Before >\n");
	printf("result : %p\n", test0->next);
	printf("result : %p\n", test1->next);
	printf("result : %p\n", test2->next);
	printf("result : %p\n", test3->next);
	printf("result : %p\n", test4->next);
	test1->next = test2;
	test2->next = test3;
	// test3->next = test4;

	printf("\n");
	printf("\n");
	printf("< Testing >\n");
	*test = test1;
	ft_lstadd_front(test, test0);
	printf("< After >\n");
	printf("test4 : %p", test0);
	printf(" -> %p\n", test0->next);
	printf("test1 : %p", test1);
	printf(" -> %p\n", test1->next);
	printf("test2 : %p", test2);
	printf(" -> %p\n", test2->next);
	printf("test3 : %p", test3);
	printf(" -> %p\n", test3->next);

	*test = test3;
	ft_lstadd_back(test, test3);
	printf("< After >\n");
	printf("test0 : %p", test0);
	printf(" -> %p\n", test0->next);
	printf("test1 : %p", test1);
	printf(" -> %p\n", test1->next);
	printf("test2 : %p", test2);
	printf(" -> %p\n", test2->next);
	printf("test3 : %p", test3);
	printf(" -> %p\n", test3->next);
	printf("test4 : %p", test4);
	printf(" -> %p\n", test4->next);

	free(test);
	free(test1);
	free(test2);
	free(test3);
	free(test4);
	free(test0);
	return (0);
}
