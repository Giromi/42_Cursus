#include "libft.h"

void	f_del(void *);
void	*f_f(void *);

int	main(void)
{
	t_list	*lst1 = ft_lstnew("lst1");
	t_list	*lst2 = ft_lstnew("lst2");
	t_list	*lst3 = ft_lstnew("lst3");
	t_list	*lst4 = ft_lstnew("lst4");
	t_list	*lst5 = ft_lstnew("lst5");
	t_list	*lst;
	t_list	*tst;
	t_list	*tst1;

	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	lst4->next = lst5;
	lst5->next = NULL;
	lst = lst1;
	// printf("%s / %p @ %p\n", (char *)lst1->content, lst1->next, lst1);
	// printf("%s / %p @ %p\n", (char *)lst2->content, lst2->next, lst2);
	// printf("%s / %p @ %p\n", (char *)lst3->content, lst3->next, lst3);
	while (lst)
	{
		printf("%s / %p @ %p\n", (char *)lst->content, lst->next, lst);
		lst = lst->next;
	}
	tst1 = ft_lstmap(lst1, f_f, f_del);
	tst = tst1;
	while (tst)
	{
		printf("%s / %p @ %p\n", (char *)tst->content, tst->next, tst);
		tst = tst->next;
	}
	ft_lstclear(&lst1, f_del);
	ft_lstclear(&tst1, f_del);

}

void	f_del(void *content)
{
	content = NULL;
	// printf("f_del\n");
}

void	*f_f(void *content)
{
	content = ft_strtrim(content, "ls");
	// printf("f_f\n");
	return (content);
}
