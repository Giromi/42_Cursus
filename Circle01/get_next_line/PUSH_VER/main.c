
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "get_next_line.h"
char	*get_next_line(int fd);
void	open_fd(char *name);
void	print_fd(int fd);
void	print_fd_name(int fd);

int main(void)
{
	int		fd;
	size_t	n;
	char 	*line = NULL;
	char	buf[BUFFER_SIZE];
	ssize_t rd;
	size_t	j;

	rd = 0;
	buf[0] = 0;
	/* 3 */		open_fd("test1");


	fd = 3;
	while (1)
	{
		if (fd != 0)
		{
			printf("------------------------------\n");
			printf("\nwhat : ");
			scanf("%d", &fd);
			printf("------------------------------\n");
		}
		if (fd == -1)
			break ;
		n = 0;
		line = get_next_line(fd);
		printf("\nfd : %d = ", fd);
		j = 0;
		while (line && line[j])
		{
			if (line[j] != '\n')
				printf("%c", line[j]);
			else
				printf("\\n");
			j++;
		}
		if (!line)
			printf("%s @ %p\n", line, line);
		free(line);
	}

	printf("close fd => ");
	for (int i = 3; i <= 13; i++)
	{
		printf("\"%d\" ", i);
		close(i);
	}
	printf("\n");
	// system("leaks -quiet a.out");
	return (0);
}

void open_fd(char *name)
{
	int fd;

	if (!(fd = open(name, O_RDONLY)))
		printf("\nError in open\n");
	else
		printf(" %d ==> %s\n", fd, name);
}

void print_fd_name(int fd)
{
	if (fd == 10)
		printf("[CASE : %s]\n", "41_no_nl");
	else if (fd == 11)
		printf("[CASE : %s]\n", "41_with_nl");
	else
		printf("exit\n");
}
				// while (line[n++])
				//     ;
				// for (size_t i = 0; i < n; i++)
				//     printf("%c", line[i]);
				// printf("\n------------------------------\n");
				// system("leaks -quiet a.out");
				// printf("------------------------------\n");
				// while (line[n++])
				//     ;
				// for (size_t i = 0; i < n; i++)
				//     printf("%c", line[i]);
				// printf("\n------------------------------\n");
				// system("leaks -quiet a.out");
				// printf("------------------------------\n");
