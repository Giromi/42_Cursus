#include "libft.h"
#include <fcntl.h>
#define MAX 13

int main(int ac, char *av[])
{
	int		fd1;
	int		fd2;
	char	buf1;

	fd1 = open("test1", O_WRONLY);
	fd2 = open("test1", O_RDONLY);
	printf("< putchar_fd >\n");
	printf("fd : %d\n", fd1);
	ft_putchar_fd(av[1][0], fd1); //write on fd_3
	read(fd2, &buf1, MAX);
	printf("[%c]", buf1);
	close(fd1);
	close(fd2);
	return (0);
}
