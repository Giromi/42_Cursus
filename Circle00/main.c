#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", 0b01111110);
	printf("%c\n", 037);
	printf("real : %d\n", isprint(037));
	printf("my   : %d\n", ft_isprint(037));
	printf("%c\n", 041);
	printf("real : %d\n", isprint(041));
	printf("my   : %d\n", ft_isprint(041));
	return (0);
}
