#include <stdio.h>

int	main(void)
{
	printf("|%+10c|", '3');		// |         3|%
	printf("|%10.4c|", '3');		// |         3|%
	printf("|%-10.4d|", 10);		// |         3|%
	printf("|%+010.7d|", -10);		// |         3|%
	return (0);
}
