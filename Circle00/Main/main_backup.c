#include "libft.h"

size_t	ft_words_cnt(char const *str, char c);
char	**ft_free_malloc(char **str);

int main(int ac, char *av[])
{

	char	what0[] = "te he ks";
	size_t	n0 = 4;
	char	what1[] = " Hello World this is party  time ";
	size_t	n1 = 7;
	char	what2[] = "  te            he ks";
	size_t	n2 = 4;
	//char	what3[] = "";
	size_t	n3 = 2;
	char	**result3;
	char	**result0;
	char	**result1;
	char	**result2;
	char	what;
	size_t	n = 20;


	printf("\n");
	result0 = ft_split(what0, ' ');
	result1 = ft_split(what1, ' ');
	result2 = ft_split(what2, ' ');
	// result3 = ft_split(what3, ' ');
	//result = ft_split(av[1], ' ');

	printf(" ori | %s \n", what0);
	for(int i = 0; i < n0; i++)
		printf("%s\t/\t", result0[i]);
	printf("\n");

	printf("\n");
	printf(" ori | %s \n", what1);
	for(int i = 0; i < n1; i++)
		printf("%s\t/\t", result1[i]);
	printf("\n");

	printf("\n");
	printf(" ori | %s \n", what2);
	for(int i= 0; i < n2; i++)
		printf("%s\t/\t", result2[i]);
	printf("\n");
	printf("\n");

	// printf("\n");
	// printf(" ori | %s \n", what3);
	// for(int i= 0; i < n3; i++)
	//     printf("%s\t/\t", result3[i]);
	// printf("\n");
	// printf("\n");
	ft_free_malloc(result0);
	ft_free_malloc(result1);
	ft_free_malloc(result2);
	ft_free_malloc(result3);
	return (0);
}

size_t	ft_words_cnt(char const *str, char c)
{
	char	*pos;
	size_t	i;
	size_t	cnt;

	cnt = 0;
	i = 0;
	while (str[i++])
	{
		pos = ft_strchr(&str[i - 1], c);
		if (pos)
		{
			i = pos - str + 1;
			if (!(str[i] && str[i] == c))
				cnt++;
		}
	}
	return (cnt);
}

char	**ft_free_malloc(char **str)
{
	int	idx;

	idx = 0;
	while (!str[idx])
		free(str[idx++]);
	free(str);
	return (NULL);
}
	// for(int i= 0; i < n; i++)
	//     printf("[%c]\t/\t", result[i]);
	// printf("\n");
	// for(int i= 0; i < n; i++)
	//     printf("[%d]\t/\t", result[i]);
