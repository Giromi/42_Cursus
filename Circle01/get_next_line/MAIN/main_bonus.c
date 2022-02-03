
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "get_next_line.h"
char 			*get_next_line_bonus(int fd);
int				ft_atoi(const char *str);
static	int		plma_check(int c, int *sign);
static	int		ft_isspace(int c);
static	size_t	make_max(int sign);
int				ft_isdigit(int c);
void 			open_fd(char *name);
void			print_fd(int fd);

int main(void)
{
	int		fd;
	size_t	n;
	char 	*line;

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
	

	while (1)
	{
		n = 0;
		printf("\nwhat : ");
		scanf("%d", &fd);
		printf("\nfd : %d = ", fd);
		line = get_next_line(fd);
		// line = get_next_line_bonus(fd);
		if (line)
		{
			while (line[n++])
				;
			for (size_t i = 0; i < n; i++)
				printf("%c", line[i]);
			// printf("\n------------------------------\n");
			// system("leaks -quiet a.out");
			// printf("------------------------------\n");
		}
		else
		{
			printf("%s \t\t\t\t\t\t@ %p\n", line, line);
			printf("close fd \"%d\"", fd);
			close(fd);
		}
		free(line);
	}
	for (int i = 0; i < 10; i++)
		close(i);
	return (0);
}

void open_fd(char *name)
{
	int fd;

	if (!(fd = open(name, O_RDONLY)))
	{
		printf("\nError in open\n");
		return ;
	}
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		c;
	long	num;
	size_t	i;
	size_t	over_value;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	i += plma_check(str[i], &sign);
	over_value = make_max(sign);
	while (ft_isdigit(str[i]) && str[i])
	{
		c = str[i] - '0';
		if (num > (long)(over_value / 10) || (num == (long)(over_value / 10)
					&& c > (int)(over_value % 10)))
			return ((int)over_value);
		num = num * 10 + (long)c;
		i++;
	}
	return ((int)(sign * num));
}

static	size_t	make_max(int sign)
{
	if (sign == -1)
		return ((size_t)LONG_MIN);
	return ((size_t)LONG_MAX);
}

static	int	ft_isspace(int c)
{
	return ((c >= 0x09 && c <= 0x0d) || c == 0x20);
}

static	int	plma_check(int c, int *sign_ptr)
{
	size_t	n;

	n = 0;
	if (c == '+' || c == '-')
		if (n++ + 1 && c == '-')
			*sign_ptr *= -1;
	return (n);
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
