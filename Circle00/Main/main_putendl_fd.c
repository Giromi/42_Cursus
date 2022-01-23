#include "libft.h"
#include <fcntl.h>
#define MAX 13

int main(int ac, char *av[])
{
	int		fd1;
	int		fd2;
	int		fd3;
	int		fd4;
	char	buf1[MAX], buf2[MAX];

	fd1 = open("test1", O_WRONLY);
	fd2 = open("test1", O_RDONLY);
	fd3 = open("test2", O_WRONLY);
	fd4 = open("test2", O_RDONLY);
	printf("< putendl_fd >\n");
	printf("fd : %d\n", fd1);
	ft_putendl_fd(av[1], fd1); //write on fd_3
	read(fd2, buf1, MAX);
	for (int i = 0; i < MAX ; i++)
		printf("[%c]\t", buf1[i]);
	printf("\n");
	for (int i = 0; i < MAX ; i++)
		printf("[%d]\t", buf1[i]);
	printf("\n");

	printf("fd : %d\n", fd3);
	ft_putstr(av[1], fd3); //write on fd_3
	read(fd4, buf2, MAX);
	for (int i = 0; i < MAX ; i++)
		printf("[%c]\t", buf2[i]);
	printf("\n");
	for (int i = 0; i < MAX ; i++)
		printf("[%d]\t", buf2[i]);
	printf("\n");

	close(fd1);
	close(fd2);
	close(fd3);
	close(fd4);
	return (0);
}
