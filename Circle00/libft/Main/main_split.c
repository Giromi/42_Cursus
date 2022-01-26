#include "libft.h"

size_t	ft_words_cnt(char const *str, char c);
char	**ft_free_malloc(char **str);
void	check(char *ca, char *s, char c, size_t cnt);

int main(int ac, char *av[])
{

	char	*what;
	char	what0[] = "te he ks";
	size_t	n0 = 4;
	char	what1[] = " Hello World this is party  time ";
	size_t	n1 = 7;
	char	what2[] = "  te            he ks";
	size_t	n2 = 4;
	char	what3[] = "tlkjeslkfjse,ksjflkjsekf,sdlfkj  k fsd,f sdfksj dfs,d kd";
	printf("\n");
	char	what4[] = "\0aa\0bbb";


	// result3 = ft_split(what3, ',');

	// NULL check
	// check("1-1", NULL, ' ', "NULL", 1);
	check("1-2", "", ' ', 1);
	check("1-3", "", 'z', 1);
	check("1-3", "hihi", 0, 2);
	// check("1-3", "   ", ' ', "", 1);

	// Basic check
	// check("2-1", what1, ' ', 7); // $."Hello" / "World" / "this" / "is" / "party" / "time" /
	// check("2-2", "  test  fsd  ", ' ', 3);
	// check("2-3", "  test  ", ' ', 2);

	// Tester check
	// check("T-1", what4, '\0', 1); 					// $. (null)
	// check("T-2", "                  olol", ' ', 2);	// $. "olol" / (null)

	// check("3-1", "H dfkjsldfk jsd lkfj", ' ', "te", 1);
	// check("3-2", "H ", ' ', "tes", 1);

	return (0);
}

void	check(char *ca, char *s, char c, size_t cnt)
{
	char **p = ft_split(s, c);

	printf("\n[CASE %s]\n", ca);
	printf("\"%s\" - \'%c\' \n", s, c);
	printf(" split  | ");
	for (int i = 0; i < cnt; i++)
	{
		if (!*(p + i))
			printf("%s / ", *(p + i));
		else
			printf("\"%s\" / ", *(p + i));
	}
	printf("\n");
	for (int i = 0; i < cnt; i++)
			printf("%p / ", *(p + i));
	printf("<%p> / ", p);
	printf("\n---------------------------\n");
	ft_free_malloc(p);
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
