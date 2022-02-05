
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
	int		fd = 0;
	size_t	n;
	char 	*line = NULL;
	char	buf[BUFFER_SIZE];
	ssize_t rd;
	size_t	j;

	rd = 0;
	buf[0] = 0;
	/* 3 */		open_fd("gnl_files/test1");
	/* 4 */		open_fd("gnl_files/test2");
	/* 5 */		open_fd("gnl_files/test3");
	/* 6 */		open_fd("gnl_files/nl");
	/* 7 */		open_fd("gnl_files/sp");
	/* 8 */		open_fd("gnl_files/multiple_line_no_nl");
	/* 9 */		open_fd("gnl_files/multiple_nlx5");
	/* 10 */	open_fd("gnl_files/41_no_nl");
	/* 11 */	open_fd("gnl_files/41_with_nl");
	/* 12 */	open_fd("gnl_files/43_no_nl");
	/* 13 */	open_fd("gnl_files/43_with_nl");
	/* 14 */	open_fd("gnl_files/mong");
	/* 15 */	open_fd("gnl_files/empty");



	// printf("fd, NULL, 1 : %ld\n", read(7, NULL, 1));	// -1
	// printf("fd, NULL, 0 : %ld\n", read(7, NULL, 0));	// -1
	// printf("fd,  buf, 0 : %ld\n", read(7, buf, 0));		// 0

	printf("BUFFER_SIZE = %d\n", BUFFER_SIZE);

	// while (1)
	// {
	//     printf("------------------------------\n");
	//     printf("\nwhat : ");
	//     scanf("%d", &fd);
	//     printf("------------------------------\n");
	//     if (fd == -1)
	//         break ;
	//     for (int i = 0; i < 4; i++)
	//     {
	//         rd = read(fd, buf, BUFFER_SIZE);
	//         buf[rd] = '\0';
	//         printf("%ld \t : \"", rd);
	//         j = 0;
	//         while (buf[j])
	//         {
	//             if (buf[j] != '\n')
	//                 printf("%c", buf[j]);
	//             else
	//                 printf("\\n");
	//             j++;
	//         }
    //
	//         printf("\"\n");
	//         printf("\n");
	//     }
	// }

	while (fd != -1)
	{
		if (!line)
		{
			printf("------------------------------\n");
			printf("\nwhat : ");
			scanf("%d", &fd);
			printf("------------------------------\n");
			// print_fd_name(fd);
		}
		if (fd == -1)
			break ;
		n = 0;
		line = get_next_line(fd);
		j = 0;
		printf("\nfd : %d = ", fd);
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
