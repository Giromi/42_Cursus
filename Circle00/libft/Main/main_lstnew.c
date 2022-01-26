#include "libft.h"

int main(int ac, char *av[])
{
	char	c;
	int		n;
	t_list	test;
	t_list	*ptr;


	c = '1';
	test = *ft_lstnew(&c);
	ptr = ft_lstnew(&c);
	printf("result : %c\n", c);
	printf("  ㄴ   : %p\n", &c);
	printf("result : %c\n", *(char *)test.content);
	printf("result : %p\n", &(*(char *)test.content));
	printf("  ㄴ   : %p\n", (char *)test.content);
	printf("result : %c\n", *(char *)(*ptr).content);
	printf("  ㄴ   : %p\n", (char *)(*ptr).content);

	printf("result : %c\n", *(char *)ptr->content);
	printf("  ㄴ   : %p\n", (char *)ptr->content);

	printf("result : %p\n", test.next);
	printf("result : %p\n", (*ptr).next);
	printf("result : %p\n", ptr->next);
	return (0);
}
