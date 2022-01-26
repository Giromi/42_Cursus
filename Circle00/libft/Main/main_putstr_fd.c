#include "libft.h"
#include <fcntl.h>
#define MAX 13

int main(int ac, char *av[])
{
	int		fd1;
	int		fd2;
	char	buf1[MAX];

	fd1 = open("test1", O_WRONLY);
	fd2 = open("test1", O_RDONLY);
	printf("fd : %d\n", fd1);
	ft_putstr_fd(av[1], fd1); //write on fd_3
	read(fd2, buf1, MAX);
	printf("%s", buf1);
	close(fd1);
	close(fd2);
	return (0);
}
