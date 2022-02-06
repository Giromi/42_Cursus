#include <stdio.h>

# define R_A 3
# define R_B 50
# define R_M 100

size_t RANDOM_NUMBER = 1;

size_t	make_random_nubmer(void)
{
	RANDOM_NUMBER = (RANDOM_NUMBER * R_A + R_B) % R_M;
	return (RANDOM_NUMBER);
}

void	set_random_number_seed(unsigned long seed)
{
	RANDOM_NUMBER = seed;
}

int main(void)
{
	int	i;
	size_t	n;

	set_random_number_seed(1);
	n = 10;
	while(n--)
		printf("%ld\n", make_random_nubmer());
	return (0);
}
