#include "libft.h"
#include <fcntl.h>

int main(int ac, char *av[])
{
	int		fd1;

	fd1 = open("test1", O_WRONLY);
	printf("fd : %d\n", fd1);
	ft_putstr_fd(av[1], fd1); //write on fd_3
	close(fd1);
	return (0);
}
