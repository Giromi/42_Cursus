#include "libft.h"

void	f_del(void *);

int	main(void)
{
	t_list	*lst1 = ft_lstnew("lst1");
	t_list	*lst2 = ft_lstnew("lst2");
	t_list	*lst3 = ft_lstnew("lst3");

	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = NULL;
	printf("%s / %p @ %p\n", (char *)lst1->content, lst1->next, lst1);
	printf("%s / %p @ %p\n", (char *)lst2->content, lst2->next, lst2);
	printf("%s / %p @ %p\n", (char *)lst3->content, lst3->next, lst3);
	// ft_lstdelone(lst1, f_del);
	lst1 = ft_lstnew("lst4");
	printf("%s / %p @ %p\n", (char *)lst1->content, lst1->next, lst1);
	printf("%s / %p @ %p\n", (char *)lst2->content, lst2->next, lst2);
	printf("%s / %p @ %p\n", (char *)lst3->content, lst3->next, lst3);
	free(lst1);
	free(lst2);
	free(lst3);
}

void	f_del(void *content)
{
	content = NULL;
	printf("f_del\n");
}
