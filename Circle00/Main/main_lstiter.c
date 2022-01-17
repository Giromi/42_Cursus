#include "libft.h"

void	f_del(void *);
void	f_f(void *);

int	main(void)
{
	char	*str1 = ft_strdup("lst1");
	char	*str2 = ft_strdup("lst2");
	char	*str3 = ft_strdup("lst3");
	char	*str4 = ft_strdup("lst4");
	char	*str5 = ft_strdup("lst5");
	t_list	*lst1 = ft_lstnew(str1);
	t_list	*lst2 = ft_lstnew(str2);
	t_list	*lst3 = ft_lstnew(str3);
	t_list	*lst4 = ft_lstnew(str4);
	t_list	*lst5 = ft_lstnew(str5);
	t_list	*lst;

	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	lst4->next = lst5;
	lst5->next = NULL;

	lst = lst1;
	while (lst)
	{
		printf("%s / %p @ %p\n", (char *)lst->content, lst->next, lst);
		lst = lst->next;
	}
	ft_lstiter(lst1, f_f);

	lst = lst1;
	while (lst)
	{
		printf("%s / %p @ %p\n", (char *)lst->content, lst->next, lst);
		lst = lst->next;
	}
	ft_lstclear(&lst1, f_del);

}

void	f_del(void *content)
{
	free(content);
}

void	f_f(void *content)
{
	((char *)content)[0] = 'L';
}
