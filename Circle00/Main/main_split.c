#include "libft.h"

size_t	ft_words_cnt(char const *str, char c);
char	**ft_free_malloc(char **str);

int main(int ac, char *av[])
{

	char	*what;
	size_t	n = ft_atoi(av[3]);;
	char	what0[] = "te he ks";
	size_t	n0 = 4;
	char	what1[] = " Hello World this is party  time ";
	size_t	n1 = 7;
	char	what2[] = "  te            he ks";
	size_t	n2 = 4;
	char	what3[] = "tlkjeslkfjse,ksjflkjsekf,sdlfkj  k fsd,f sdfksj dfs,d kd";
	size_t	n3 = 6;
	char	**result;
	char	**result0;
	char	**result1;
	char	**result2;
	char	**result3;
	char	c = *(av[2]);

	what = av[1];
	printf("\n");
	result0 = ft_split(what0, ' ');
	result1 = ft_split(what1, ' ');
	result2 = ft_split(what2, ' ');
	result3 = ft_split(what3, ',');
	result = ft_split(av[1], av[2][0]);

	printf(" origin | %s \n", what1);
	printf(" split  | ");
	for(int i = 0; i < n0; i++)
		printf("%s /", result0[i]);
	printf("\n");

	printf("\n");
	printf(" origin | %s \n", what1);
	printf(" split  | ");
	for(int i = 0; i < n1; i++)
		printf("%s / ", result1[i]);
	printf("\n");

	printf("\n");
	
	printf(" origin | %s \n", what2);
	printf(" split  | ");
	for(int i= 0; i < n2; i++)
		printf("%s / ", result2[i]);
	printf("\n");
	printf("\n");

	printf("\n");
	printf(" origin | %s \n", what3);
	printf(" split  | ");
	for(int i= 0; i < n3; i++)
		printf("%s / ", result3[i]);
	printf("\n");
	printf("\n");

	printf("\n");
	printf(" origin | %s \n", what);
	printf(" split  | ");
	for(int i= 0; i < n; i++)
		printf("%s / ", result[i]);
	printf("\n");
	printf("\n");
	ft_free_malloc(result0);
	ft_free_malloc(result1);
	ft_free_malloc(result2);
	ft_free_malloc(result3);
	ft_free_malloc(result);
	return (0);
}

char	**ft_free_malloc(char **str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		free(str[idx++]);
	free(str);
	return (NULL);
}
	// for(int i= 0; i < n; i++)
	//     printf("[%c]\t/\t", result[i]);
	// printf("\n");
	// for(int i= 0; i < n; i++)
	//     printf("[%d]\t/\t", result[i]);
