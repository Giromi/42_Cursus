#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include <stdlib.h>

int	main(void)
{
	printf("%d\n", 0b01111110);
	printf("------isascii-----\n");
	printf("%c\n", 257);
	printf("------atoi-----\n");
	printf("real : %d\n", atoi("0b11"));
	return (0);
}
