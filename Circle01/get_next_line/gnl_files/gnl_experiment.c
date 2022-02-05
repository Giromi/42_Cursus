
#include "get_next_line.h"

int		ft_atoi(const char *str);
void	check(int fd, char *buf);

int main(int ac, char *av[])
{
	int		fd1;
	int		fd;
	int		fd2;
	char	*buf = (char *)malloc(sizeof(char) * BUFFER_SIZE);

	fd = ft_atoi(av[1]);
	fd1 = open("test1", O_RDONLY);
	fd2 = open("test2", O_RDONLY);
	// fd2 = open("test2", O_RDONLY);
	printf("fd : %d\n", fd1);
	printf("fd : %d\n", fd2);
	check(fd, buf);
	// read(fd2, buf2, BUFFER_SIZE);
	// printf("%s", buf2);
	close(fd1);
	close(fd2);
	return (0);
}

void	check(int fd, char *buf)
{
	size_t	i;
	size_t	rd;

	rd = 1;
	while (rd)
	{
		rd = read(fd, buf, BUFFER_SIZE);
		printf("--------------------");
		printf("\n%zu\n", rd);
		i = 0;
		while (i++ < rd)
			printf("%c", buf[i - 1]);
		printf("\n--------------------\n");
	}


}
